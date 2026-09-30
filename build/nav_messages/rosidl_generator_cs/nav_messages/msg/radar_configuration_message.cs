// generated from rosidl_generator_cs/resource/idl.cs.em
// with input from nav_messages:msg/RadarConfigurationMessage.idl
// generated code does not contain a copyright notice

//TODO (adamdbrw): include depending on what is needed
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using ROS2;
using ROS2.Internal;




namespace nav_messages
{
namespace msg
{
// message class
public class RadarConfigurationMessage : MessageInternals, MessageWithHeader
{
  private IntPtr _handle;
  private static readonly DllLoadUtils dllLoadUtils;

  public bool IsDisposed { get { return disposed; } }
  private bool disposed;

  // constant declarations

  // members
  public std_msgs.msg.Header Header { get; set; }

  // Generic interface for all messages with headers
  public void SetHeaderFrame(string frameID)
  {
    Header.Frame_id = frameID;
  }

  public string GetHeaderFrame()
  {
    return Header.Frame_id;
  }

  public void UpdateHeaderTime(int sec, uint nanosec)
  {
    Header.Stamp.Sec = sec;
    Header.Stamp.Nanosec = nanosec;
  }
  public byte[] Azimuth_samples { get; set; }
  public byte[] Encoder_size { get; set; }
  public byte[] Bin_size { get; set; }
  public byte[] Range_in_bins { get; set; }
  public byte[] Expected_rotation_rate { get; set; }
  public byte[] Range_gain { get; set; }
  public byte[] Range_offset { get; set; }

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate IntPtr NativeGetTypeSupportType();
  private static NativeGetTypeSupportType native_get_typesupport = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate IntPtr NativeCreateNativeMessageType();
  private static NativeCreateNativeMessageType native_create_native_message = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeDestroyNativeMessageType(IntPtr messageHandle);
  private static NativeDestroyNativeMessageType native_destroy_native_message = null;


  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate IntPtr NativeGetNestedHandleHeaderType(
    IntPtr messageHandle);
  private static NativeGetNestedHandleHeaderType native_get_nested_message_handle_header = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate IntPtr NativeReadFieldAzimuth_samplesType(
    out int array_size,
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate bool NativeWriteFieldAzimuth_samplesType(
      [MarshalAs(UnmanagedType.LPArray, ArraySubType = UnmanagedType.U1, SizeParamIndex = 1)]
      byte[] values,
      int array_size,
      IntPtr messageHandle);

  private static NativeReadFieldAzimuth_samplesType native_read_field_azimuth_samples = null;
  private static NativeWriteFieldAzimuth_samplesType native_write_field_azimuth_samples = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate IntPtr NativeReadFieldEncoder_sizeType(
    out int array_size,
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate bool NativeWriteFieldEncoder_sizeType(
      [MarshalAs(UnmanagedType.LPArray, ArraySubType = UnmanagedType.U1, SizeParamIndex = 1)]
      byte[] values,
      int array_size,
      IntPtr messageHandle);

  private static NativeReadFieldEncoder_sizeType native_read_field_encoder_size = null;
  private static NativeWriteFieldEncoder_sizeType native_write_field_encoder_size = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate IntPtr NativeReadFieldBin_sizeType(
    out int array_size,
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate bool NativeWriteFieldBin_sizeType(
      [MarshalAs(UnmanagedType.LPArray, ArraySubType = UnmanagedType.U1, SizeParamIndex = 1)]
      byte[] values,
      int array_size,
      IntPtr messageHandle);

  private static NativeReadFieldBin_sizeType native_read_field_bin_size = null;
  private static NativeWriteFieldBin_sizeType native_write_field_bin_size = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate IntPtr NativeReadFieldRange_in_binsType(
    out int array_size,
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate bool NativeWriteFieldRange_in_binsType(
      [MarshalAs(UnmanagedType.LPArray, ArraySubType = UnmanagedType.U1, SizeParamIndex = 1)]
      byte[] values,
      int array_size,
      IntPtr messageHandle);

  private static NativeReadFieldRange_in_binsType native_read_field_range_in_bins = null;
  private static NativeWriteFieldRange_in_binsType native_write_field_range_in_bins = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate IntPtr NativeReadFieldExpected_rotation_rateType(
    out int array_size,
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate bool NativeWriteFieldExpected_rotation_rateType(
      [MarshalAs(UnmanagedType.LPArray, ArraySubType = UnmanagedType.U1, SizeParamIndex = 1)]
      byte[] values,
      int array_size,
      IntPtr messageHandle);

  private static NativeReadFieldExpected_rotation_rateType native_read_field_expected_rotation_rate = null;
  private static NativeWriteFieldExpected_rotation_rateType native_write_field_expected_rotation_rate = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate IntPtr NativeReadFieldRange_gainType(
    out int array_size,
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate bool NativeWriteFieldRange_gainType(
      [MarshalAs(UnmanagedType.LPArray, ArraySubType = UnmanagedType.U1, SizeParamIndex = 1)]
      byte[] values,
      int array_size,
      IntPtr messageHandle);

  private static NativeReadFieldRange_gainType native_read_field_range_gain = null;
  private static NativeWriteFieldRange_gainType native_write_field_range_gain = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate IntPtr NativeReadFieldRange_offsetType(
    out int array_size,
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate bool NativeWriteFieldRange_offsetType(
      [MarshalAs(UnmanagedType.LPArray, ArraySubType = UnmanagedType.U1, SizeParamIndex = 1)]
      byte[] values,
      int array_size,
      IntPtr messageHandle);

  private static NativeReadFieldRange_offsetType native_read_field_range_offset = null;
  private static NativeWriteFieldRange_offsetType native_write_field_range_offset = null;

  // This is done to preload before ros2 rmw_implementation attempts to find custom message library (and fails without absolute path)
  static private void MessageTypeSupportPreload()
  {
    if (RuntimeInformation.IsOSPlatform(OSPlatform.Linux))
    { //only affects Linux since on Windows PATH can be set effectively, dynamically
        const string rmw_fastrtps = "rmw_fastrtps_cpp";
        var rmw_implementation = Environment.GetEnvironmentVariable("RMW_IMPLEMENTATION");
        if (rmw_implementation == null)
        {
          var ros_distro = Environment.GetEnvironmentVariable("ROS_DISTRO");
          if (ros_distro == "galactic")
          { // no preloads for CycloneDDS, default for galactic
            return;
          }
          rmw_implementation = rmw_fastrtps; // default for all other distros
        }

        // TODO - generalize to Connext and other implementations
        if (rmw_implementation == rmw_fastrtps)
        { // TODO - get rcl level constants, e.g. rosidl_typesupport_fastrtps_c__identifier
          // Load typesupport for fastrtps (_c depends on _cpp)
          var loadUtils = DllLoadUtilsFactory.GetDllLoadUtils();
          IntPtr messageLibraryTypesupportFastRTPS_CPP = loadUtils.LoadLibraryNoSuffix("nav_messages__rosidl_typesupport_fastrtps_cpp");
          IntPtr messageLibraryTypesupportFastRTPS_C = loadUtils.LoadLibraryNoSuffix("nav_messages__rosidl_typesupport_fastrtps_c");
      }
    }
  }

  static RadarConfigurationMessage()
  {
    dllLoadUtils = DllLoadUtilsFactory.GetDllLoadUtils();
    IntPtr messageLibraryTypesupport = dllLoadUtils.LoadLibraryNoSuffix("nav_messages__rosidl_typesupport_c");
    IntPtr messageLibraryGenerator = dllLoadUtils.LoadLibraryNoSuffix("nav_messages__rosidl_generator_c");
    IntPtr messageLibraryIntro = dllLoadUtils.LoadLibraryNoSuffix("nav_messages__rosidl_typesupport_introspection_c");
    MessageTypeSupportPreload();

    IntPtr nativelibrary = dllLoadUtils.LoadLibrary("nav_messages_radar_configuration_message__rosidl_typesupport_c");
    IntPtr native_get_typesupport_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarConfigurationMessage_native_get_type_support");
    RadarConfigurationMessage.native_get_typesupport = (NativeGetTypeSupportType)Marshal.GetDelegateForFunctionPointer(
      native_get_typesupport_ptr, typeof(NativeGetTypeSupportType));

    IntPtr native_create_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarConfigurationMessage_native_create_native_message");
    RadarConfigurationMessage.native_create_native_message = (NativeCreateNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_create_native_message_ptr, typeof(NativeCreateNativeMessageType));

    IntPtr native_destroy_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarConfigurationMessage_native_destroy_native_message");
    RadarConfigurationMessage.native_destroy_native_message = (NativeDestroyNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_destroy_native_message_ptr, typeof(NativeDestroyNativeMessageType));

    IntPtr native_get_nested_message_handle_header_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarConfigurationMessage_native_get_nested_message_handle_header");
    RadarConfigurationMessage.native_get_nested_message_handle_header =
      (NativeGetNestedHandleHeaderType)Marshal.GetDelegateForFunctionPointer(
      native_get_nested_message_handle_header_ptr, typeof(NativeGetNestedHandleHeaderType));
    IntPtr native_read_field_azimuth_samples_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarConfigurationMessage_native_read_field_azimuth_samples");
    RadarConfigurationMessage.native_read_field_azimuth_samples =
      (NativeReadFieldAzimuth_samplesType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_azimuth_samples_ptr, typeof(NativeReadFieldAzimuth_samplesType));

    IntPtr native_write_field_azimuth_samples_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarConfigurationMessage_native_write_field_azimuth_samples");
    RadarConfigurationMessage.native_write_field_azimuth_samples =
      (NativeWriteFieldAzimuth_samplesType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_azimuth_samples_ptr, typeof(NativeWriteFieldAzimuth_samplesType));
    IntPtr native_read_field_encoder_size_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarConfigurationMessage_native_read_field_encoder_size");
    RadarConfigurationMessage.native_read_field_encoder_size =
      (NativeReadFieldEncoder_sizeType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_encoder_size_ptr, typeof(NativeReadFieldEncoder_sizeType));

    IntPtr native_write_field_encoder_size_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarConfigurationMessage_native_write_field_encoder_size");
    RadarConfigurationMessage.native_write_field_encoder_size =
      (NativeWriteFieldEncoder_sizeType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_encoder_size_ptr, typeof(NativeWriteFieldEncoder_sizeType));
    IntPtr native_read_field_bin_size_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarConfigurationMessage_native_read_field_bin_size");
    RadarConfigurationMessage.native_read_field_bin_size =
      (NativeReadFieldBin_sizeType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_bin_size_ptr, typeof(NativeReadFieldBin_sizeType));

    IntPtr native_write_field_bin_size_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarConfigurationMessage_native_write_field_bin_size");
    RadarConfigurationMessage.native_write_field_bin_size =
      (NativeWriteFieldBin_sizeType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_bin_size_ptr, typeof(NativeWriteFieldBin_sizeType));
    IntPtr native_read_field_range_in_bins_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarConfigurationMessage_native_read_field_range_in_bins");
    RadarConfigurationMessage.native_read_field_range_in_bins =
      (NativeReadFieldRange_in_binsType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_range_in_bins_ptr, typeof(NativeReadFieldRange_in_binsType));

    IntPtr native_write_field_range_in_bins_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarConfigurationMessage_native_write_field_range_in_bins");
    RadarConfigurationMessage.native_write_field_range_in_bins =
      (NativeWriteFieldRange_in_binsType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_range_in_bins_ptr, typeof(NativeWriteFieldRange_in_binsType));
    IntPtr native_read_field_expected_rotation_rate_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarConfigurationMessage_native_read_field_expected_rotation_rate");
    RadarConfigurationMessage.native_read_field_expected_rotation_rate =
      (NativeReadFieldExpected_rotation_rateType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_expected_rotation_rate_ptr, typeof(NativeReadFieldExpected_rotation_rateType));

    IntPtr native_write_field_expected_rotation_rate_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarConfigurationMessage_native_write_field_expected_rotation_rate");
    RadarConfigurationMessage.native_write_field_expected_rotation_rate =
      (NativeWriteFieldExpected_rotation_rateType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_expected_rotation_rate_ptr, typeof(NativeWriteFieldExpected_rotation_rateType));
    IntPtr native_read_field_range_gain_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarConfigurationMessage_native_read_field_range_gain");
    RadarConfigurationMessage.native_read_field_range_gain =
      (NativeReadFieldRange_gainType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_range_gain_ptr, typeof(NativeReadFieldRange_gainType));

    IntPtr native_write_field_range_gain_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarConfigurationMessage_native_write_field_range_gain");
    RadarConfigurationMessage.native_write_field_range_gain =
      (NativeWriteFieldRange_gainType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_range_gain_ptr, typeof(NativeWriteFieldRange_gainType));
    IntPtr native_read_field_range_offset_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarConfigurationMessage_native_read_field_range_offset");
    RadarConfigurationMessage.native_read_field_range_offset =
      (NativeReadFieldRange_offsetType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_range_offset_ptr, typeof(NativeReadFieldRange_offsetType));

    IntPtr native_write_field_range_offset_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarConfigurationMessage_native_write_field_range_offset");
    RadarConfigurationMessage.native_write_field_range_offset =
      (NativeWriteFieldRange_offsetType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_range_offset_ptr, typeof(NativeWriteFieldRange_offsetType));
  }

  public IntPtr TypeSupportHandle
  {
    get
    {
      return native_get_typesupport();
    }
  }

  // Handle. Create on first use. Can be set for nested classes. TODO -- access...
  public IntPtr Handle
  {
    get
    {
      if (_handle == IntPtr.Zero)
        _handle = native_create_native_message();
      return _handle;
    }
  }

  public RadarConfigurationMessage()
  {
    Header = new std_msgs.msg.Header();
    Azimuth_samples = new byte[0];
    Encoder_size = new byte[0];
    Bin_size = new byte[0];
    Range_in_bins = new byte[0];
    Expected_rotation_rate = new byte[0];
    Range_gain = new byte[0];
    Range_offset = new byte[0];
  }

  public void ReadNativeMessage()
  {
    ReadNativeMessage(Handle);
  }

  public void ReadNativeMessage(IntPtr handle)
  {
    if (handle == IntPtr.Zero)
      throw new System.InvalidOperationException("Invalid handle for reading");
    Header.ReadNativeMessage(native_get_nested_message_handle_header(handle));
    { //TODO - (adam) this is a bit clunky. Is there a better way to marshal unsigned and bool types?
      int arraySize = 0;
      IntPtr pArr = native_read_field_azimuth_samples(out arraySize, handle);
      Azimuth_samples = new byte[arraySize];
      byte[] __Azimuth_samples = new byte[arraySize];

      if (arraySize != 0)
      {
        int start = 0;
        Marshal.Copy(pArr, __Azimuth_samples, start, arraySize);
      }
      for (int i = 0; i < arraySize; ++i)
      {
        Azimuth_samples[i] = (byte)(__Azimuth_samples[i]);
      }
    }
    { //TODO - (adam) this is a bit clunky. Is there a better way to marshal unsigned and bool types?
      int arraySize = 0;
      IntPtr pArr = native_read_field_encoder_size(out arraySize, handle);
      Encoder_size = new byte[arraySize];
      byte[] __Encoder_size = new byte[arraySize];

      if (arraySize != 0)
      {
        int start = 0;
        Marshal.Copy(pArr, __Encoder_size, start, arraySize);
      }
      for (int i = 0; i < arraySize; ++i)
      {
        Encoder_size[i] = (byte)(__Encoder_size[i]);
      }
    }
    { //TODO - (adam) this is a bit clunky. Is there a better way to marshal unsigned and bool types?
      int arraySize = 0;
      IntPtr pArr = native_read_field_bin_size(out arraySize, handle);
      Bin_size = new byte[arraySize];
      byte[] __Bin_size = new byte[arraySize];

      if (arraySize != 0)
      {
        int start = 0;
        Marshal.Copy(pArr, __Bin_size, start, arraySize);
      }
      for (int i = 0; i < arraySize; ++i)
      {
        Bin_size[i] = (byte)(__Bin_size[i]);
      }
    }
    { //TODO - (adam) this is a bit clunky. Is there a better way to marshal unsigned and bool types?
      int arraySize = 0;
      IntPtr pArr = native_read_field_range_in_bins(out arraySize, handle);
      Range_in_bins = new byte[arraySize];
      byte[] __Range_in_bins = new byte[arraySize];

      if (arraySize != 0)
      {
        int start = 0;
        Marshal.Copy(pArr, __Range_in_bins, start, arraySize);
      }
      for (int i = 0; i < arraySize; ++i)
      {
        Range_in_bins[i] = (byte)(__Range_in_bins[i]);
      }
    }
    { //TODO - (adam) this is a bit clunky. Is there a better way to marshal unsigned and bool types?
      int arraySize = 0;
      IntPtr pArr = native_read_field_expected_rotation_rate(out arraySize, handle);
      Expected_rotation_rate = new byte[arraySize];
      byte[] __Expected_rotation_rate = new byte[arraySize];

      if (arraySize != 0)
      {
        int start = 0;
        Marshal.Copy(pArr, __Expected_rotation_rate, start, arraySize);
      }
      for (int i = 0; i < arraySize; ++i)
      {
        Expected_rotation_rate[i] = (byte)(__Expected_rotation_rate[i]);
      }
    }
    { //TODO - (adam) this is a bit clunky. Is there a better way to marshal unsigned and bool types?
      int arraySize = 0;
      IntPtr pArr = native_read_field_range_gain(out arraySize, handle);
      Range_gain = new byte[arraySize];
      byte[] __Range_gain = new byte[arraySize];

      if (arraySize != 0)
      {
        int start = 0;
        Marshal.Copy(pArr, __Range_gain, start, arraySize);
      }
      for (int i = 0; i < arraySize; ++i)
      {
        Range_gain[i] = (byte)(__Range_gain[i]);
      }
    }
    { //TODO - (adam) this is a bit clunky. Is there a better way to marshal unsigned and bool types?
      int arraySize = 0;
      IntPtr pArr = native_read_field_range_offset(out arraySize, handle);
      Range_offset = new byte[arraySize];
      byte[] __Range_offset = new byte[arraySize];

      if (arraySize != 0)
      {
        int start = 0;
        Marshal.Copy(pArr, __Range_offset, start, arraySize);
      }
      for (int i = 0; i < arraySize; ++i)
      {
        Range_offset[i] = (byte)(__Range_offset[i]);
      }
    }
  }

  public void WriteNativeMessage()
  {
    if (_handle == IntPtr.Zero)
    { // message object reused for subsequent publishing.
      // This could be problematic if sequences sizes changed, but me handle that by checking for it in the c implementation
      _handle = native_create_native_message();
    }

    WriteNativeMessage(Handle);
  }

  // Write from CS to native handle
  public void WriteNativeMessage(IntPtr handle)
  {
    if (handle == IntPtr.Zero)
      throw new System.InvalidOperationException("Invalid handle for writing");
    Header.WriteNativeMessage(native_get_nested_message_handle_header(handle));
    {
            bool success = native_write_field_azimuth_samples(Azimuth_samples, Azimuth_samples.Length, handle);
      
      if (!success)
        throw new System.InvalidOperationException("Error writing field for azimuth_samples");
    }
    {
            bool success = native_write_field_encoder_size(Encoder_size, Encoder_size.Length, handle);
      
      if (!success)
        throw new System.InvalidOperationException("Error writing field for encoder_size");
    }
    {
            bool success = native_write_field_bin_size(Bin_size, Bin_size.Length, handle);
      
      if (!success)
        throw new System.InvalidOperationException("Error writing field for bin_size");
    }
    {
            bool success = native_write_field_range_in_bins(Range_in_bins, Range_in_bins.Length, handle);
      
      if (!success)
        throw new System.InvalidOperationException("Error writing field for range_in_bins");
    }
    {
            bool success = native_write_field_expected_rotation_rate(Expected_rotation_rate, Expected_rotation_rate.Length, handle);
      
      if (!success)
        throw new System.InvalidOperationException("Error writing field for expected_rotation_rate");
    }
    {
            bool success = native_write_field_range_gain(Range_gain, Range_gain.Length, handle);
      
      if (!success)
        throw new System.InvalidOperationException("Error writing field for range_gain");
    }
    {
            bool success = native_write_field_range_offset(Range_offset, Range_offset.Length, handle);
      
      if (!success)
        throw new System.InvalidOperationException("Error writing field for range_offset");
    }
  }

  public void Dispose()
  {
    if (!disposed)
    {
      if (_handle != IntPtr.Zero)
      {
        native_destroy_native_message(_handle);
        _handle = IntPtr.Zero;
        disposed = true;
      }
    }
  }

  ~RadarConfigurationMessage()
  {
    Dispose();
  }

};  // class RadarConfigurationMessage
}  // namespace msg
}  // namespace nav_messages



