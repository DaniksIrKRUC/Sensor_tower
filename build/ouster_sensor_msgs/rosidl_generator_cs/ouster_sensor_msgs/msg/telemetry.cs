// generated from rosidl_generator_cs/resource/idl.cs.em
// with input from ouster_sensor_msgs:msg/Telemetry.idl
// generated code does not contain a copyright notice

//TODO (adamdbrw): include depending on what is needed
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using ROS2;
using ROS2.Internal;




namespace ouster_sensor_msgs
{
namespace msg
{
// message class
public class Telemetry : MessageInternals, MessageWithHeader
{
  private IntPtr _handle;
  private static readonly DllLoadUtils dllLoadUtils;

  public bool IsDisposed { get { return disposed; } }
  private bool disposed;

  // constant declarations
  public const byte THERMAL_SHUTDOWN_NORMAL = 0;
  public const byte THERMAL_SHUTDOWN_IMMINENT = 1;
  public const byte SHOT_LIMITING_NORMAL = 0;
  public const byte SHOT_LIMITING_IMMINENT = 1;
  public const byte SHOT_LIMITING_REDUCTION_0_10 = 2;
  public const byte SHOT_LIMITING_REDUCTION_10_20 = 3;
  public const byte SHOT_LIMITING_REDUCTION_20_30 = 4;
  public const byte SHOT_LIMITING_REDUCTION_30_40 = 5;
  public const byte SHOT_LIMITING_REDUCTION_40_50 = 6;
  public const byte SHOT_LIMITING_REDUCTION_50_60 = 7;
  public const byte SHOT_LIMITING_REDUCTION_60_70 = 8;
  public const byte SHOT_LIMITING_REDUCTION_70_75 = 9;

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
  public ushort Countdown_thermal_shutdown { get; set; }
  public ushort Countdown_shot_limiting { get; set; }
  public byte Thermal_shutdown { get; set; }
  public byte Shot_limiting { get; set; }

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
  private delegate ushort NativeReadFieldCountdown_thermal_shutdownType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldCountdown_thermal_shutdownType(
    IntPtr messageHandle, ushort value);


  private static NativeReadFieldCountdown_thermal_shutdownType native_read_field_countdown_thermal_shutdown = null;
  private static NativeWriteFieldCountdown_thermal_shutdownType native_write_field_countdown_thermal_shutdown = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate ushort NativeReadFieldCountdown_shot_limitingType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldCountdown_shot_limitingType(
    IntPtr messageHandle, ushort value);


  private static NativeReadFieldCountdown_shot_limitingType native_read_field_countdown_shot_limiting = null;
  private static NativeWriteFieldCountdown_shot_limitingType native_write_field_countdown_shot_limiting = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate byte NativeReadFieldThermal_shutdownType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldThermal_shutdownType(
    IntPtr messageHandle, byte value);


  private static NativeReadFieldThermal_shutdownType native_read_field_thermal_shutdown = null;
  private static NativeWriteFieldThermal_shutdownType native_write_field_thermal_shutdown = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate byte NativeReadFieldShot_limitingType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldShot_limitingType(
    IntPtr messageHandle, byte value);


  private static NativeReadFieldShot_limitingType native_read_field_shot_limiting = null;
  private static NativeWriteFieldShot_limitingType native_write_field_shot_limiting = null;

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
          IntPtr messageLibraryTypesupportFastRTPS_CPP = loadUtils.LoadLibraryNoSuffix("ouster_sensor_msgs__rosidl_typesupport_fastrtps_cpp");
          IntPtr messageLibraryTypesupportFastRTPS_C = loadUtils.LoadLibraryNoSuffix("ouster_sensor_msgs__rosidl_typesupport_fastrtps_c");
      }
    }
  }

  static Telemetry()
  {
    dllLoadUtils = DllLoadUtilsFactory.GetDllLoadUtils();
    IntPtr messageLibraryTypesupport = dllLoadUtils.LoadLibraryNoSuffix("ouster_sensor_msgs__rosidl_typesupport_c");
    IntPtr messageLibraryGenerator = dllLoadUtils.LoadLibraryNoSuffix("ouster_sensor_msgs__rosidl_generator_c");
    IntPtr messageLibraryIntro = dllLoadUtils.LoadLibraryNoSuffix("ouster_sensor_msgs__rosidl_typesupport_introspection_c");
    MessageTypeSupportPreload();

    IntPtr nativelibrary = dllLoadUtils.LoadLibrary("ouster_sensor_msgs_telemetry__rosidl_typesupport_c");
    IntPtr native_get_typesupport_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "ouster_sensor_msgs__msg__Telemetry_native_get_type_support");
    Telemetry.native_get_typesupport = (NativeGetTypeSupportType)Marshal.GetDelegateForFunctionPointer(
      native_get_typesupport_ptr, typeof(NativeGetTypeSupportType));

    IntPtr native_create_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "ouster_sensor_msgs__msg__Telemetry_native_create_native_message");
    Telemetry.native_create_native_message = (NativeCreateNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_create_native_message_ptr, typeof(NativeCreateNativeMessageType));

    IntPtr native_destroy_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "ouster_sensor_msgs__msg__Telemetry_native_destroy_native_message");
    Telemetry.native_destroy_native_message = (NativeDestroyNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_destroy_native_message_ptr, typeof(NativeDestroyNativeMessageType));

    IntPtr native_get_nested_message_handle_header_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "ouster_sensor_msgs__msg__Telemetry_native_get_nested_message_handle_header");
    Telemetry.native_get_nested_message_handle_header =
      (NativeGetNestedHandleHeaderType)Marshal.GetDelegateForFunctionPointer(
      native_get_nested_message_handle_header_ptr, typeof(NativeGetNestedHandleHeaderType));
    IntPtr native_read_field_countdown_thermal_shutdown_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "ouster_sensor_msgs__msg__Telemetry_native_read_field_countdown_thermal_shutdown");
    Telemetry.native_read_field_countdown_thermal_shutdown =
      (NativeReadFieldCountdown_thermal_shutdownType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_countdown_thermal_shutdown_ptr, typeof(NativeReadFieldCountdown_thermal_shutdownType));

    IntPtr native_write_field_countdown_thermal_shutdown_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "ouster_sensor_msgs__msg__Telemetry_native_write_field_countdown_thermal_shutdown");
    Telemetry.native_write_field_countdown_thermal_shutdown =
      (NativeWriteFieldCountdown_thermal_shutdownType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_countdown_thermal_shutdown_ptr, typeof(NativeWriteFieldCountdown_thermal_shutdownType));
    IntPtr native_read_field_countdown_shot_limiting_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "ouster_sensor_msgs__msg__Telemetry_native_read_field_countdown_shot_limiting");
    Telemetry.native_read_field_countdown_shot_limiting =
      (NativeReadFieldCountdown_shot_limitingType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_countdown_shot_limiting_ptr, typeof(NativeReadFieldCountdown_shot_limitingType));

    IntPtr native_write_field_countdown_shot_limiting_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "ouster_sensor_msgs__msg__Telemetry_native_write_field_countdown_shot_limiting");
    Telemetry.native_write_field_countdown_shot_limiting =
      (NativeWriteFieldCountdown_shot_limitingType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_countdown_shot_limiting_ptr, typeof(NativeWriteFieldCountdown_shot_limitingType));
    IntPtr native_read_field_thermal_shutdown_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "ouster_sensor_msgs__msg__Telemetry_native_read_field_thermal_shutdown");
    Telemetry.native_read_field_thermal_shutdown =
      (NativeReadFieldThermal_shutdownType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_thermal_shutdown_ptr, typeof(NativeReadFieldThermal_shutdownType));

    IntPtr native_write_field_thermal_shutdown_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "ouster_sensor_msgs__msg__Telemetry_native_write_field_thermal_shutdown");
    Telemetry.native_write_field_thermal_shutdown =
      (NativeWriteFieldThermal_shutdownType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_thermal_shutdown_ptr, typeof(NativeWriteFieldThermal_shutdownType));
    IntPtr native_read_field_shot_limiting_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "ouster_sensor_msgs__msg__Telemetry_native_read_field_shot_limiting");
    Telemetry.native_read_field_shot_limiting =
      (NativeReadFieldShot_limitingType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_shot_limiting_ptr, typeof(NativeReadFieldShot_limitingType));

    IntPtr native_write_field_shot_limiting_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "ouster_sensor_msgs__msg__Telemetry_native_write_field_shot_limiting");
    Telemetry.native_write_field_shot_limiting =
      (NativeWriteFieldShot_limitingType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_shot_limiting_ptr, typeof(NativeWriteFieldShot_limitingType));
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

  public Telemetry()
  {
    Header = new std_msgs.msg.Header();
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
    Countdown_thermal_shutdown = native_read_field_countdown_thermal_shutdown(handle);
    Countdown_shot_limiting = native_read_field_countdown_shot_limiting(handle);
    Thermal_shutdown = native_read_field_thermal_shutdown(handle);
    Shot_limiting = native_read_field_shot_limiting(handle);
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
    native_write_field_countdown_thermal_shutdown(handle, Countdown_thermal_shutdown);
    native_write_field_countdown_shot_limiting(handle, Countdown_shot_limiting);
    native_write_field_thermal_shutdown(handle, Thermal_shutdown);
    native_write_field_shot_limiting(handle, Shot_limiting);
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

  ~Telemetry()
  {
    Dispose();
  }

};  // class Telemetry
}  // namespace msg
}  // namespace ouster_sensor_msgs



