#include <algorithm>

#include "Pointcloud_data_output.h"
#include "rawdatahelper.h"
#include "Colossus_protocol.h"

using namespace Navtech::Time;
using namespace Navtech::Time::Monotonic;

namespace Navtech {

    Pointcloud_data_output::Pointcloud_data_output(ICore_services& core_srvc) :
        Data_output             { core_srvc, "PCO" },
        server                  { core_srvc },
        packet_rate_callback    { 10_sec, std::bind(&Pointcloud_data_output::calculate_packet_rate, this) }
    {
        core_services->timer()->add_callback(packet_rate_callback);
    }


    void Pointcloud_data_output::start()
    {
        core_services->log_message(_name + " - starting...");

        health_handler.when_notified_invoke(&Pointcloud_data_output::on_health_update, this);
		core_services->core_event_dispatcher()->attach_to<Core_event::health>(health_handler);

        // TODO -

        Data_output::start();
        enabled = true;
    }
    
    
    void Pointcloud_data_output::stop()
    {
        enabled = false;

        packet_rate_callback.finished();
        
		core_services->core_event_dispatcher()->detach_from<Core_event::health>(health_handler);
        
        Data_output::stop();
    }
    

    // -----------------------------------------------------------------------------------------------------------------------
	//
    void Pointcloud_data_output::update_config()
    {
        handle_update_config();
    }


    Pointcloud_data_output::Configuration Pointcloud_data_output::load_config() const
    {
        Scoped_lock lock { _configMutex };
        return local_config; 
    }


    void Pointcloud_data_output::store_config(const Pointcloud_data_output::Configuration& cfg)
    {
        Scoped_lock lock { _configMutex };
        local_config = cfg;
        _configured  = true;
    }


    void Pointcloud_data_output::handle_update_config() 
    {
        using Networking::Endpoint;
        using Networking::IP_address;

        // Make sure the base class updates its config first
        //
        Data_output::update_config();

        // Now update the local configuration
        //
        auto cfg = load_config();

        // Aliases to aid readability
        //
        const auto& network_cfg  = core_services->configuration_manager()->Config().RadarConfig.NetworkConfig;
        const auto& hardware_cfg = core_services->configuration_manager()->Config().RadarConfig.HardwareConfig;

        bool has_NTP      = network_cfg.NTP_servers != "0.0.0.0" || network_cfg.NTP_servers != "";
        bool has_PTP      = network_cfg.PTPD;
        cfg.send_datetime = has_NTP || has_PTP;

        cfg.remote_endpt  = Endpoint { IP_address { network_cfg.cat240_address }, network_cfg.data_port };
        server.send_to(cfg.remote_endpt);
        server.max_packet_size(network_cfg.max_packet_size);

        cfg.sweep_period            = to_usec_duration(hardware_cfg.profile.sweep_period);
        cfg.range_in_bins           = _rangeInBins;
        cfg.is_high_precision       = _highPrecisionOutput;
        cfg.force_low_precision     = _forceLowPrecisionOutput;
        cfg.encoder_offset          = _encoderOffset;
        cfg.encoder_size            = _encoderSize;
        cfg.encoder_step_size       = hardware_cfg.ExpectedEncoderStep();
        cfg.start_angle             = Unit::Degrees { static_cast<float>(_startAngle) };
        cfg.end_angle               = Unit::Degrees { static_cast<float>(_endAngle) };
        cfg.azimuths_per_rotation   = hardware_cfg.AzimuthSamples();
        cfg.rotation_speed          = hardware_cfg.profile.expected_rotation;
        cfg.range_gain              = hardware_cfg.range_gain;
        cfg.range_offset            = hardware_cfg.range_offset;
        cfg.bin_size                = hardware_cfg.profile.RangeResolution();

        store_config(cfg);

        // Log...
        //
        core_services->log_message(_name + " - Remote endpoint       [" + cfg.remote_endpt.to_string() + "]");
        core_services->log_message(_name + " - Force Low Precision   [" + (_forceLowPrecisionOutput ? "True" : "False") + "]");
        core_services->log_message(_name + " - Data Output Precision [" + (_highPrecisionOutput ? "High" : "Low") + "]");
        core_services->log_message(_name + " - Encoder Offset        [" + std::to_string(_encoderOffset) + "]");
        core_services->log_message(_name + " - Start Angle           [" + std::to_string(_startAngle) + "]");
        core_services->log_message(_name + " - End Angle             [" + std::to_string(_endAngle) + "]");
        core_services->log_message(_name + " - Configuration Updated");
    }


    void Pointcloud_data_output::on_health_update(const Core::Configuration::Radar::Health& health [[maybe_unused]])
    {
        // The health config is updated approximately every 5 seconds.
        //
        // TODO - Output the health message
    }


    // -----------------------------------------------------------------------------------------------------------------------
	//
    void Pointcloud_data_output::raw_radar_data_handler(
        const uint8_t*                      raw_data, 
        uint16_t                            slot, 
        const Time::Monotonic::Observation& timestamp 
    )
    {
        if (!enabled) 	        return;
		if (!_configured)		return; 
        if (!_running) 			return; 
        if (!_processRadarData) return;

        auto cfg = load_config();

        if (cfg.force_low_precision)    process_8bit_FFT(raw_data, slot, timestamp);
		else if (cfg.is_high_precision) process_16bit_FFT(raw_data, slot, timestamp);
		else                            process_8bit_FFT(raw_data, slot, timestamp);
    }


    // -----------------------------------------------------------------------------------------------------------------------
	//
    void Pointcloud_data_output::process_8bit_FFT(
        const uint8_t*                      raw_data  [[maybe_unused]], 
        uint16_t                            slot      [[maybe_unused]], 
        const Time::Monotonic::Observation& timestamp [[maybe_unused]]
    )
    {
        using namespace std;
        using namespace Networking::Colossus_protocol::UDP;

        Pointcloud_data data { };

        Azimuth_num       azimuth { get_azimuth(raw_data) };
        Polar::Coordinate bearing { 10.0_m, to_angle(azimuth) };

        data.azimuth(azimuth);
        data.timestamp(timestamp.to_real_time());
        data.position(bearing);
        data.power(45.0_dB);

        // Send...
        //
        Message msg  { Type::point_cloud };
        msg.append(data);

        core_services
            ->colossus_UDP_event_dispatcher()
            ->notify<Event::send_message>(msg);
    }


    std::vector<Unit::dB> Pointcloud_data_output::get_8bit_FFT(const uint8_t* raw_data)
    {
        using namespace std;
        using namespace Unit;
        using namespace Raw_radar_data;

        auto cfg = load_config();

        vector<dB> fft { };
        fft.resize(cfg.range_in_bins);

        const uint8_t* data_start { FFT_data_8bit_in_dB(raw_data) };
        const uint8_t* data_end   { data_start + cfg.range_in_bins };

        transform(
            data_start,
            data_end,
            fft.begin(),
            [](uint8_t cell) { return static_cast<dB>(cell / 2.0f); }
        ); 

        // Legacy protocols used the first five bytes of the FFT data as
        // health info.  This is no longer used, but to prevent potential
        // issues, invalidate this 'health' data by setting the first five
        // bytes to the same value.
        //
        fill(fft.begin(), fft.begin() + 4, fft[4]); 

        return fft;
    }


    // -----------------------------------------------------------------------------------------------------------------------
	//
    void Pointcloud_data_output::process_16bit_FFT(
        const uint8_t*                      raw_data, 
        uint16_t                            slot        [[maybe_unused]], 
        const Time::Monotonic::Observation& timestamp   [[maybe_unused]]
    )
    {
        using namespace std;
        using namespace Networking::Colossus_protocol;

        auto fft = get_16bit_FFT(raw_data);

        (void) fft;

    }


    std::vector<Unit::dB> Pointcloud_data_output::get_16bit_FFT(const uint8_t* raw_data)
    {
        auto cfg = load_config();

        return Raw_radar_data::FFT_data_16bit_as_vector(raw_data, cfg.range_in_bins);
    }


    // -----------------------------------------------------------------------------------------------------------------------
    // 
    //
    void Pointcloud_data_output::calculate_packet_rate()
	{
		auto current_time = now();
		auto elapsed_time = to_nearest_second(current_time - last_update);

		if (elapsed_time > 0_sec) {		
			packet_rate = (packets_sent / elapsed_time.to_sec()) * _percentageOfPackets;
			kbit_rate   = ((bytes_sent * 8) / 1024) / elapsed_time.to_sec();
		} 
		else {
			packet_rate = 0;
			kbit_rate   = 0;
		}

		bytes_sent   = 0;
		packets_sent = 0;
		last_update  = current_time;

		core_services
            ->core_event_dispatcher()
            ->notify<Core_event::data_output>(Data_output_rate { packet_rate, kbit_rate });
	}
    
    // -----------------------------------------------------------------------------------------------------------------------
    // Helpers
    //
    Unit::Azimuth_num Pointcloud_data_output::get_azimuth(const uint8_t* raw_data)
    {
        auto cfg = load_config();

        Unit::Encoder_step step = Raw_radar_data::get_azimuth(raw_data, cfg.encoder_offset, cfg.encoder_size);
        return step /= cfg.encoder_step_size;
    }


    Unit::Degrees Pointcloud_data_output::to_angle(Unit::Azimuth az) 
    { 
        auto cfg = load_config();

        return Unit::Degrees { az / (cfg.azimuths_per_rotation / 360.0f) };
    }


    std::uint16_t Pointcloud_data_output::get_index(const uint8_t* raw_data)
    {
        return Raw_radar_data::get_counter(raw_data);
    }

} // namespace Navtech