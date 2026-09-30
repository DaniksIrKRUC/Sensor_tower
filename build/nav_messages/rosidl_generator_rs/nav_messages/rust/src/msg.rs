#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to nav_messages__msg__RadarConfigurationMessage
/// A ROS message based on a configuration data message from a radar

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadarConfigurationMessage {
    /// add a header message to hold message timestamp
    pub header: std_msgs::msg::Header,

    /// azimuth_samples (uint16) represented as a network order (uint8_t) byte array
    pub azimuth_samples: Vec<u8>,

    /// encoder_size (uint16) represented as a network order (uint8_t) byte array
    pub encoder_size: Vec<u8>,

    /// bin_size (double) represented as a network order (uint8_t) byte array
    pub bin_size: Vec<u8>,

    /// range_in_bins (uint16) represented as a network order (uint8_t) byte array
    pub range_in_bins: Vec<u8>,

    /// expected_rotation_rate (uint16) represented as a network order (uint8_t) byte array
    pub expected_rotation_rate: Vec<u8>,

    /// range_gain (float) represented as a network order (uint8_t) byte array
    pub range_gain: Vec<u8>,

    /// range_offset (float) represented as a network order (uint8_t) byte array
    pub range_offset: Vec<u8>,

}



impl Default for RadarConfigurationMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RadarConfigurationMessage::default())
  }
}

impl rosidl_runtime_rs::Message for RadarConfigurationMessage {
  type RmwMsg = super::msg::rmw::RadarConfigurationMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        azimuth_samples: msg.azimuth_samples.into(),
        encoder_size: msg.encoder_size.into(),
        bin_size: msg.bin_size.into(),
        range_in_bins: msg.range_in_bins.into(),
        expected_rotation_rate: msg.expected_rotation_rate.into(),
        range_gain: msg.range_gain.into(),
        range_offset: msg.range_offset.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        azimuth_samples: msg.azimuth_samples.as_slice().into(),
        encoder_size: msg.encoder_size.as_slice().into(),
        bin_size: msg.bin_size.as_slice().into(),
        range_in_bins: msg.range_in_bins.as_slice().into(),
        expected_rotation_rate: msg.expected_rotation_rate.as_slice().into(),
        range_gain: msg.range_gain.as_slice().into(),
        range_offset: msg.range_offset.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      azimuth_samples: msg.azimuth_samples
          .into_iter()
          .collect(),
      encoder_size: msg.encoder_size
          .into_iter()
          .collect(),
      bin_size: msg.bin_size
          .into_iter()
          .collect(),
      range_in_bins: msg.range_in_bins
          .into_iter()
          .collect(),
      expected_rotation_rate: msg.expected_rotation_rate
          .into_iter()
          .collect(),
      range_gain: msg.range_gain
          .into_iter()
          .collect(),
      range_offset: msg.range_offset
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to nav_messages__msg__RadarFftDataMessage
/// A ROS message based on an FFT data message from a radar

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadarFftDataMessage {
    /// add a header message to hold message timestamp
    pub header: std_msgs::msg::Header,

    /// angle (double) represented as a network order (uint8_t) byte array
    pub angle: Vec<u8>,

    /// azimuth (uint16_t) represented as a network order (uint8_t) byte array
    pub azimuth: Vec<u8>,

    /// sweep_counter (uint16_t) represented as a network order (uint8_t) byte array
    pub sweep_counter: Vec<u8>,

    /// ntp_seconds (uint32_t) represented as a network order (uint8_t) byte array
    pub ntp_seconds: Vec<u8>,

    /// ntp_split_seconds (uint32_t) represented as a network order (uint8_t) byte array
    pub ntp_split_seconds: Vec<u8>,

    /// data (uint8_t) represented as a network order (uint8_t) byte array
    pub data: Vec<u8>,

    /// data_length (uint16_t) represented as a network order (uint8_t) byte array
    pub data_length: Vec<u8>,

}



impl Default for RadarFftDataMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RadarFftDataMessage::default())
  }
}

impl rosidl_runtime_rs::Message for RadarFftDataMessage {
  type RmwMsg = super::msg::rmw::RadarFftDataMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        angle: msg.angle.into(),
        azimuth: msg.azimuth.into(),
        sweep_counter: msg.sweep_counter.into(),
        ntp_seconds: msg.ntp_seconds.into(),
        ntp_split_seconds: msg.ntp_split_seconds.into(),
        data: msg.data.into(),
        data_length: msg.data_length.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        angle: msg.angle.as_slice().into(),
        azimuth: msg.azimuth.as_slice().into(),
        sweep_counter: msg.sweep_counter.as_slice().into(),
        ntp_seconds: msg.ntp_seconds.as_slice().into(),
        ntp_split_seconds: msg.ntp_split_seconds.as_slice().into(),
        data: msg.data.as_slice().into(),
        data_length: msg.data_length.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      angle: msg.angle
          .into_iter()
          .collect(),
      azimuth: msg.azimuth
          .into_iter()
          .collect(),
      sweep_counter: msg.sweep_counter
          .into_iter()
          .collect(),
      ntp_seconds: msg.ntp_seconds
          .into_iter()
          .collect(),
      ntp_split_seconds: msg.ntp_split_seconds
          .into_iter()
          .collect(),
      data: msg.data
          .into_iter()
          .collect(),
      data_length: msg.data_length
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to nav_messages__msg__CameraConfigurationMessage
/// A ROS message to define camera configuration information

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraConfigurationMessage {
    /// add a header message to hold message timestamp
    pub header: std_msgs::msg::Header,

    /// Image height
    pub height: u32,

    /// Image width
    pub width: u32,

    /// Image number of color channels
    pub channels: u32,

    /// Camera frames per second
    pub fps: u32,

}



impl Default for CameraConfigurationMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CameraConfigurationMessage::default())
  }
}

impl rosidl_runtime_rs::Message for CameraConfigurationMessage {
  type RmwMsg = super::msg::rmw::CameraConfigurationMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        height: msg.height,
        width: msg.width,
        channels: msg.channels,
        fps: msg.fps,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      height: msg.height,
      width: msg.width,
      channels: msg.channels,
      fps: msg.fps,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      height: msg.height,
      width: msg.width,
      channels: msg.channels,
      fps: msg.fps,
    }
  }
}


