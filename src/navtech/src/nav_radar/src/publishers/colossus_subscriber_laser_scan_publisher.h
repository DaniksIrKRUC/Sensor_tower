#include <rclcpp/rclcpp.hpp>
#include "nav_messages/msg/radar_configuration_message.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "Units.h"
#include "Colossus_protocol.h"

using namespace Navtech::Unit;
using namespace Navtech::Networking::Colossus_protocol;


class Colossus_subscriber_laser_scan_publisher : public ::rclcpp::Node
{
public:
    Colossus_subscriber_laser_scan_publisher();

private:
    constexpr static int radar_configuration_queue_size{ 1 };
    constexpr static int radar_fft_queue_size{ 400 };
    constexpr static int radar_laser_scan_queue_size{ 4 };

    bool rotated_once(int azimuth);
    bool completed_full_rotation(int azimuth);

    void configuration_data_callback(const nav_messages::msg::RadarConfigurationMessage::SharedPtr msg);
    void fft_data_callback(const nav_messages::msg::RadarFftDataMessage::SharedPtr msg);

    bool config_received { };
    uint16_t start_azimuth{ 0 };
    uint16_t end_azimuth{ 0 };
    uint16_t start_bin{ 0 };
    uint16_t end_bin{ 0 };
    uint16_t power_threshold{ 0 };
    uint16_t azimuth_offset{ 0 };
    double range_offset{ 0.0 };
    double range_gain{ 0.0 };
    double config_range_offset{ 0.0 };

    std::vector <float> range_values;
    std::vector <float> intensity_values;

    int azimuth_samples{ 0 };
    int encoder_size{ 0 };
    float bin_size{ 0 };
    int range_in_bins{ 0 };
    int expected_rotation_rate{ 0 };
    int rotation_count{ 0 };
    int config_publish_count{ 4 };

    rclcpp::Subscription<nav_messages::msg::RadarConfigurationMessage>::SharedPtr configuration_data_subscriber;
    rclcpp::Subscription<nav_messages::msg::RadarFftDataMessage>::SharedPtr fft_data_subscriber;
    rclcpp::Publisher<sensor_msgs::msg::LaserScan>::SharedPtr laser_scan_publisher{};

    void publish_laser_scan();
};