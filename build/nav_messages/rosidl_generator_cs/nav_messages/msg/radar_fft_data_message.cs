// generated from rosidl_generator_cs/resource/idl.cs.em
// with input from nav_messages:msg/RadarFftDataMessage.idl
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
public class RadarFftDataMessage : MessageInternals, MessageWithHeader
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
  public byte[] Angle { get; set; }
  public byte[] Azimuth { get; set; }
  public byte[] Sweep_counter { get; set; }
  public byte[] Ntp_seconds { get; set; }
  public byte[] Ntp_split_seconds { get; set; }
  public byte[] Data { get; set; }
  public byte[] Data_length { get; set; }

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
  internal delegate IntPtr NativeReadFieldAngleType(
    out int array_size,
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate bool NativeWriteFieldAngleType(
      [MarshalAs(UnmanagedType.LPArray, ArraySubType = UnmanagedType.U1, SizeParamIndex = 1)]
      byte[] values,
      int array_size,
      IntPtr messageHandle);

  private static NativeReadFieldAngleType native_read_field_angle = null;
  private static NativeWriteFieldAngleType native_write_field_angle = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate IntPtr NativeReadFieldAzimuthType(
    out int array_size,
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate bool NativeWriteFieldAzimuthType(
      [MarshalAs(UnmanagedType.LPArray, ArraySubType = UnmanagedType.U1, SizeParamIndex = 1)]
      byte[] values,
      int array_size,
      IntPtr messageHandle);

  private static NativeReadFieldAzimuthType native_read_field_azimuth = null;
  private static NativeWriteFieldAzimuthType native_write_field_azimuth = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate IntPtr NativeReadFieldSweep_counterType(
    out int array_size,
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate bool NativeWriteFieldSweep_counterType(
      [MarshalAs(UnmanagedType.LPArray, ArraySubType = UnmanagedType.U1, SizeParamIndex = 1)]
      byte[] values,
      int array_size,
      IntPtr messageHandle);

  private static NativeReadFieldSweep_counterType native_read_field_sweep_counter = null;
  private static NativeWriteFieldSweep_counterType native_write_field_sweep_counter = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate IntPtr NativeReadFieldNtp_secondsType(
    out int array_size,
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate bool NativeWriteFieldNtp_secondsType(
      [MarshalAs(UnmanagedType.LPArray, ArraySubType = UnmanagedType.U1, SizeParamIndex = 1)]
      byte[] values,
      int array_size,
      IntPtr messageHandle);

  private static NativeReadFieldNtp_secondsType native_read_field_ntp_seconds = null;
  private static NativeWriteFieldNtp_secondsType native_write_field_ntp_seconds = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate IntPtr NativeReadFieldNtp_split_secondsType(
    out int array_size,
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate bool NativeWriteFieldNtp_split_secondsType(
      [MarshalAs(UnmanagedType.LPArray, ArraySubType = UnmanagedType.U1, SizeParamIndex = 1)]
      byte[] values,
      int array_size,
      IntPtr messageHandle);

  private static NativeReadFieldNtp_split_secondsType native_read_field_ntp_split_seconds = null;
  private static NativeWriteFieldNtp_split_secondsType native_write_field_ntp_split_seconds = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate IntPtr NativeReadFieldDataType(
    out int array_size,
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate bool NativeWriteFieldDataType(
      [MarshalAs(UnmanagedType.LPArray, ArraySubType = UnmanagedType.U1, SizeParamIndex = 1)]
      byte[] values,
      int array_size,
      IntPtr messageHandle);

  private static NativeReadFieldDataType native_read_field_data = null;
  private static NativeWriteFieldDataType native_write_field_data = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate IntPtr NativeReadFieldData_lengthType(
    out int array_size,
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  internal delegate bool NativeWriteFieldData_lengthType(
      [MarshalAs(UnmanagedType.LPArray, ArraySubType = UnmanagedType.U1, SizeParamIndex = 1)]
      byte[] values,
      int array_size,
      IntPtr messageHandle);

  private static NativeReadFieldData_lengthType native_read_field_data_length = null;
  private static NativeWriteFieldData_lengthType native_write_field_data_length = null;

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

  static RadarFftDataMessage()
  {
    dllLoadUtils = DllLoadUtilsFactory.GetDllLoadUtils();
    IntPtr messageLibraryTypesupport = dllLoadUtils.LoadLibraryNoSuffix("nav_messages__rosidl_typesupport_c");
    IntPtr messageLibraryGenerator = dllLoadUtils.LoadLibraryNoSuffix("nav_messages__rosidl_generator_c");
    IntPtr messageLibraryIntro = dllLoadUtils.LoadLibraryNoSuffix("nav_messages__rosidl_typesupport_introspection_c");
    MessageTypeSupportPreload();

    IntPtr nativelibrary = dllLoadUtils.LoadLibrary("nav_messages_radar_fft_data_message__rosidl_typesupport_c");
    IntPtr native_get_typesupport_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarFftDataMessage_native_get_type_support");
    RadarFftDataMessage.native_get_typesupport = (NativeGetTypeSupportType)Marshal.GetDelegateForFunctionPointer(
      native_get_typesupport_ptr, typeof(NativeGetTypeSupportType));

    IntPtr native_create_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarFftDataMessage_native_create_native_message");
    RadarFftDataMessage.native_create_native_message = (NativeCreateNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_create_native_message_ptr, typeof(NativeCreateNativeMessageType));

    IntPtr native_destroy_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarFftDataMessage_native_destroy_native_message");
    RadarFftDataMessage.native_destroy_native_message = (NativeDestroyNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_destroy_native_message_ptr, typeof(NativeDestroyNativeMessageType));

    IntPtr native_get_nested_message_handle_header_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarFftDataMessage_native_get_nested_message_handle_header");
    RadarFftDataMessage.native_get_nested_message_handle_header =
      (NativeGetNestedHandleHeaderType)Marshal.GetDelegateForFunctionPointer(
      native_get_nested_message_handle_header_ptr, typeof(NativeGetNestedHandleHeaderType));
    IntPtr native_read_field_angle_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarFftDataMessage_native_read_field_angle");
    RadarFftDataMessage.native_read_field_angle =
      (NativeReadFieldAngleType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_angle_ptr, typeof(NativeReadFieldAngleType));

    IntPtr native_write_field_angle_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarFftDataMessage_native_write_field_angle");
    RadarFftDataMessage.native_write_field_angle =
      (NativeWriteFieldAngleType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_angle_ptr, typeof(NativeWriteFieldAngleType));
    IntPtr native_read_field_azimuth_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarFftDataMessage_native_read_field_azimuth");
    RadarFftDataMessage.native_read_field_azimuth =
      (NativeReadFieldAzimuthType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_azimuth_ptr, typeof(NativeReadFieldAzimuthType));

    IntPtr native_write_field_azimuth_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarFftDataMessage_native_write_field_azimuth");
    RadarFftDataMessage.native_write_field_azimuth =
      (NativeWriteFieldAzimuthType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_azimuth_ptr, typeof(NativeWriteFieldAzimuthType));
    IntPtr native_read_field_sweep_counter_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarFftDataMessage_native_read_field_sweep_counter");
    RadarFftDataMessage.native_read_field_sweep_counter =
      (NativeReadFieldSweep_counterType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_sweep_counter_ptr, typeof(NativeReadFieldSweep_counterType));

    IntPtr native_write_field_sweep_counter_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarFftDataMessage_native_write_field_sweep_counter");
    RadarFftDataMessage.native_write_field_sweep_counter =
      (NativeWriteFieldSweep_counterType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_sweep_counter_ptr, typeof(NativeWriteFieldSweep_counterType));
    IntPtr native_read_field_ntp_seconds_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarFftDataMessage_native_read_field_ntp_seconds");
    RadarFftDataMessage.native_read_field_ntp_seconds =
      (NativeReadFieldNtp_secondsType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_ntp_seconds_ptr, typeof(NativeReadFieldNtp_secondsType));

    IntPtr native_write_field_ntp_seconds_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarFftDataMessage_native_write_field_ntp_seconds");
    RadarFftDataMessage.native_write_field_ntp_seconds =
      (NativeWriteFieldNtp_secondsType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_ntp_seconds_ptr, typeof(NativeWriteFieldNtp_secondsType));
    IntPtr native_read_field_ntp_split_seconds_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarFftDataMessage_native_read_field_ntp_split_seconds");
    RadarFftDataMessage.native_read_field_ntp_split_seconds =
      (NativeReadFieldNtp_split_secondsType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_ntp_split_seconds_ptr, typeof(NativeReadFieldNtp_split_secondsType));

    IntPtr native_write_field_ntp_split_seconds_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarFftDataMessage_native_write_field_ntp_split_seconds");
    RadarFftDataMessage.native_write_field_ntp_split_seconds =
      (NativeWriteFieldNtp_split_secondsType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_ntp_split_seconds_ptr, typeof(NativeWriteFieldNtp_split_secondsType));
    IntPtr native_read_field_data_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarFftDataMessage_native_read_field_data");
    RadarFftDataMessage.native_read_field_data =
      (NativeReadFieldDataType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_data_ptr, typeof(NativeReadFieldDataType));

    IntPtr native_write_field_data_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarFftDataMessage_native_write_field_data");
    RadarFftDataMessage.native_write_field_data =
      (NativeWriteFieldDataType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_data_ptr, typeof(NativeWriteFieldDataType));
    IntPtr native_read_field_data_length_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarFftDataMessage_native_read_field_data_length");
    RadarFftDataMessage.native_read_field_data_length =
      (NativeReadFieldData_lengthType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_data_length_ptr, typeof(NativeReadFieldData_lengthType));

    IntPtr native_write_field_data_length_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__RadarFftDataMessage_native_write_field_data_length");
    RadarFftDataMessage.native_write_field_data_length =
      (NativeWriteFieldData_lengthType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_data_length_ptr, typeof(NativeWriteFieldData_lengthType));
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

  public RadarFftDataMessage()
  {
    Header = new std_msgs.msg.Header();
    Angle = new byte[0];
    Azimuth = new byte[0];
    Sweep_counter = new byte[0];
    Ntp_seconds = new byte[0];
    Ntp_split_seconds = new byte[0];
    Data = new byte[0];
    Data_length = new byte[0];
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
      IntPtr pArr = native_read_field_angle(out arraySize, handle);
      Angle = new byte[arraySize];
      byte[] __Angle = new byte[arraySize];

      if (arraySize != 0)
      {
        int start = 0;
        Marshal.Copy(pArr, __Angle, start, arraySize);
      }
      for (int i = 0; i < arraySize; ++i)
      {
        Angle[i] = (byte)(__Angle[i]);
      }
    }
    { //TODO - (adam) this is a bit clunky. Is there a better way to marshal unsigned and bool types?
      int arraySize = 0;
      IntPtr pArr = native_read_field_azimuth(out arraySize, handle);
      Azimuth = new byte[arraySize];
      byte[] __Azimuth = new byte[arraySize];

      if (arraySize != 0)
      {
        int start = 0;
        Marshal.Copy(pArr, __Azimuth, start, arraySize);
      }
      for (int i = 0; i < arraySize; ++i)
      {
        Azimuth[i] = (byte)(__Azimuth[i]);
      }
    }
    { //TODO - (adam) this is a bit clunky. Is there a better way to marshal unsigned and bool types?
      int arraySize = 0;
      IntPtr pArr = native_read_field_sweep_counter(out arraySize, handle);
      Sweep_counter = new byte[arraySize];
      byte[] __Sweep_counter = new byte[arraySize];

      if (arraySize != 0)
      {
        int start = 0;
        Marshal.Copy(pArr, __Sweep_counter, start, arraySize);
      }
      for (int i = 0; i < arraySize; ++i)
      {
        Sweep_counter[i] = (byte)(__Sweep_counter[i]);
      }
    }
    { //TODO - (adam) this is a bit clunky. Is there a better way to marshal unsigned and bool types?
      int arraySize = 0;
      IntPtr pArr = native_read_field_ntp_seconds(out arraySize, handle);
      Ntp_seconds = new byte[arraySize];
      byte[] __Ntp_seconds = new byte[arraySize];

      if (arraySize != 0)
      {
        int start = 0;
        Marshal.Copy(pArr, __Ntp_seconds, start, arraySize);
      }
      for (int i = 0; i < arraySize; ++i)
      {
        Ntp_seconds[i] = (byte)(__Ntp_seconds[i]);
      }
    }
    { //TODO - (adam) this is a bit clunky. Is there a better way to marshal unsigned and bool types?
      int arraySize = 0;
      IntPtr pArr = native_read_field_ntp_split_seconds(out arraySize, handle);
      Ntp_split_seconds = new byte[arraySize];
      byte[] __Ntp_split_seconds = new byte[arraySize];

      if (arraySize != 0)
      {
        int start = 0;
        Marshal.Copy(pArr, __Ntp_split_seconds, start, arraySize);
      }
      for (int i = 0; i < arraySize; ++i)
      {
        Ntp_split_seconds[i] = (byte)(__Ntp_split_seconds[i]);
      }
    }
    { //TODO - (adam) this is a bit clunky. Is there a better way to marshal unsigned and bool types?
      int arraySize = 0;
      IntPtr pArr = native_read_field_data(out arraySize, handle);
      Data = new byte[arraySize];
      byte[] __Data = new byte[arraySize];

      if (arraySize != 0)
      {
        int start = 0;
        Marshal.Copy(pArr, __Data, start, arraySize);
      }
      for (int i = 0; i < arraySize; ++i)
      {
        Data[i] = (byte)(__Data[i]);
      }
    }
    { //TODO - (adam) this is a bit clunky. Is there a better way to marshal unsigned and bool types?
      int arraySize = 0;
      IntPtr pArr = native_read_field_data_length(out arraySize, handle);
      Data_length = new byte[arraySize];
      byte[] __Data_length = new byte[arraySize];

      if (arraySize != 0)
      {
        int start = 0;
        Marshal.Copy(pArr, __Data_length, start, arraySize);
      }
      for (int i = 0; i < arraySize; ++i)
      {
        Data_length[i] = (byte)(__Data_length[i]);
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
            bool success = native_write_field_angle(Angle, Angle.Length, handle);
      
      if (!success)
        throw new System.InvalidOperationException("Error writing field for angle");
    }
    {
            bool success = native_write_field_azimuth(Azimuth, Azimuth.Length, handle);
      
      if (!success)
        throw new System.InvalidOperationException("Error writing field for azimuth");
    }
    {
            bool success = native_write_field_sweep_counter(Sweep_counter, Sweep_counter.Length, handle);
      
      if (!success)
        throw new System.InvalidOperationException("Error writing field for sweep_counter");
    }
    {
            bool success = native_write_field_ntp_seconds(Ntp_seconds, Ntp_seconds.Length, handle);
      
      if (!success)
        throw new System.InvalidOperationException("Error writing field for ntp_seconds");
    }
    {
            bool success = native_write_field_ntp_split_seconds(Ntp_split_seconds, Ntp_split_seconds.Length, handle);
      
      if (!success)
        throw new System.InvalidOperationException("Error writing field for ntp_split_seconds");
    }
    {
            bool success = native_write_field_data(Data, Data.Length, handle);
      
      if (!success)
        throw new System.InvalidOperationException("Error writing field for data");
    }
    {
            bool success = native_write_field_data_length(Data_length, Data_length.Length, handle);
      
      if (!success)
        throw new System.InvalidOperationException("Error writing field for data_length");
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

  ~RadarFftDataMessage()
  {
    Dispose();
  }

};  // class RadarFftDataMessage
}  // namespace msg
}  // namespace nav_messages



