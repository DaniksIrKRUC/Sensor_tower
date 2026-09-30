#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "nav_messages__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__nav_messages__msg__RadarConfigurationMessage() -> *const std::ffi::c_void;
}

#[link(name = "nav_messages__rosidl_generator_c")]
extern "C" {
    fn nav_messages__msg__RadarConfigurationMessage__init(msg: *mut RadarConfigurationMessage) -> bool;
    fn nav_messages__msg__RadarConfigurationMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RadarConfigurationMessage>, size: usize) -> bool;
    fn nav_messages__msg__RadarConfigurationMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RadarConfigurationMessage>);
    fn nav_messages__msg__RadarConfigurationMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RadarConfigurationMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<RadarConfigurationMessage>) -> bool;
}

// Corresponds to nav_messages__msg__RadarConfigurationMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// A ROS message based on a configuration data message from a radar

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadarConfigurationMessage {
    /// add a header message to hold message timestamp
    pub header: std_msgs::msg::rmw::Header,

    /// azimuth_samples (uint16) represented as a network order (uint8_t) byte array
    pub azimuth_samples: rosidl_runtime_rs::Sequence<u8>,

    /// encoder_size (uint16) represented as a network order (uint8_t) byte array
    pub encoder_size: rosidl_runtime_rs::Sequence<u8>,

    /// bin_size (double) represented as a network order (uint8_t) byte array
    pub bin_size: rosidl_runtime_rs::Sequence<u8>,

    /// range_in_bins (uint16) represented as a network order (uint8_t) byte array
    pub range_in_bins: rosidl_runtime_rs::Sequence<u8>,

    /// expected_rotation_rate (uint16) represented as a network order (uint8_t) byte array
    pub expected_rotation_rate: rosidl_runtime_rs::Sequence<u8>,

    /// range_gain (float) represented as a network order (uint8_t) byte array
    pub range_gain: rosidl_runtime_rs::Sequence<u8>,

    /// range_offset (float) represented as a network order (uint8_t) byte array
    pub range_offset: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for RadarConfigurationMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !nav_messages__msg__RadarConfigurationMessage__init(&mut msg as *mut _) {
        panic!("Call to nav_messages__msg__RadarConfigurationMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RadarConfigurationMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nav_messages__msg__RadarConfigurationMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nav_messages__msg__RadarConfigurationMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nav_messages__msg__RadarConfigurationMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RadarConfigurationMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RadarConfigurationMessage where Self: Sized {
  const TYPE_NAME: &'static str = "nav_messages/msg/RadarConfigurationMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__nav_messages__msg__RadarConfigurationMessage() }
  }
}


#[link(name = "nav_messages__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__nav_messages__msg__RadarFftDataMessage() -> *const std::ffi::c_void;
}

#[link(name = "nav_messages__rosidl_generator_c")]
extern "C" {
    fn nav_messages__msg__RadarFftDataMessage__init(msg: *mut RadarFftDataMessage) -> bool;
    fn nav_messages__msg__RadarFftDataMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RadarFftDataMessage>, size: usize) -> bool;
    fn nav_messages__msg__RadarFftDataMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RadarFftDataMessage>);
    fn nav_messages__msg__RadarFftDataMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RadarFftDataMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<RadarFftDataMessage>) -> bool;
}

// Corresponds to nav_messages__msg__RadarFftDataMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// A ROS message based on an FFT data message from a radar

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadarFftDataMessage {
    /// add a header message to hold message timestamp
    pub header: std_msgs::msg::rmw::Header,

    /// angle (double) represented as a network order (uint8_t) byte array
    pub angle: rosidl_runtime_rs::Sequence<u8>,

    /// azimuth (uint16_t) represented as a network order (uint8_t) byte array
    pub azimuth: rosidl_runtime_rs::Sequence<u8>,

    /// sweep_counter (uint16_t) represented as a network order (uint8_t) byte array
    pub sweep_counter: rosidl_runtime_rs::Sequence<u8>,

    /// ntp_seconds (uint32_t) represented as a network order (uint8_t) byte array
    pub ntp_seconds: rosidl_runtime_rs::Sequence<u8>,

    /// ntp_split_seconds (uint32_t) represented as a network order (uint8_t) byte array
    pub ntp_split_seconds: rosidl_runtime_rs::Sequence<u8>,

    /// data (uint8_t) represented as a network order (uint8_t) byte array
    pub data: rosidl_runtime_rs::Sequence<u8>,

    /// data_length (uint16_t) represented as a network order (uint8_t) byte array
    pub data_length: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for RadarFftDataMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !nav_messages__msg__RadarFftDataMessage__init(&mut msg as *mut _) {
        panic!("Call to nav_messages__msg__RadarFftDataMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RadarFftDataMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nav_messages__msg__RadarFftDataMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nav_messages__msg__RadarFftDataMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nav_messages__msg__RadarFftDataMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RadarFftDataMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RadarFftDataMessage where Self: Sized {
  const TYPE_NAME: &'static str = "nav_messages/msg/RadarFftDataMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__nav_messages__msg__RadarFftDataMessage() }
  }
}


#[link(name = "nav_messages__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__nav_messages__msg__CameraConfigurationMessage() -> *const std::ffi::c_void;
}

#[link(name = "nav_messages__rosidl_generator_c")]
extern "C" {
    fn nav_messages__msg__CameraConfigurationMessage__init(msg: *mut CameraConfigurationMessage) -> bool;
    fn nav_messages__msg__CameraConfigurationMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CameraConfigurationMessage>, size: usize) -> bool;
    fn nav_messages__msg__CameraConfigurationMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CameraConfigurationMessage>);
    fn nav_messages__msg__CameraConfigurationMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CameraConfigurationMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<CameraConfigurationMessage>) -> bool;
}

// Corresponds to nav_messages__msg__CameraConfigurationMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// A ROS message to define camera configuration information

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraConfigurationMessage {
    /// add a header message to hold message timestamp
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !nav_messages__msg__CameraConfigurationMessage__init(&mut msg as *mut _) {
        panic!("Call to nav_messages__msg__CameraConfigurationMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CameraConfigurationMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nav_messages__msg__CameraConfigurationMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nav_messages__msg__CameraConfigurationMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nav_messages__msg__CameraConfigurationMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CameraConfigurationMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CameraConfigurationMessage where Self: Sized {
  const TYPE_NAME: &'static str = "nav_messages/msg/CameraConfigurationMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__nav_messages__msg__CameraConfigurationMessage() }
  }
}


