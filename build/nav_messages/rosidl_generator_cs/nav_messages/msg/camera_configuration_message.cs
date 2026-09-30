// generated from rosidl_generator_cs/resource/idl.cs.em
// with input from nav_messages:msg/CameraConfigurationMessage.idl
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
public class CameraConfigurationMessage : MessageInternals, MessageWithHeader
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
  public uint Height { get; set; }
  public uint Width { get; set; }
  public uint Channels { get; set; }
  public uint Fps { get; set; }

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
  private delegate uint NativeReadFieldHeightType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldHeightType(
    IntPtr messageHandle, uint value);


  private static NativeReadFieldHeightType native_read_field_height = null;
  private static NativeWriteFieldHeightType native_write_field_height = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate uint NativeReadFieldWidthType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldWidthType(
    IntPtr messageHandle, uint value);


  private static NativeReadFieldWidthType native_read_field_width = null;
  private static NativeWriteFieldWidthType native_write_field_width = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate uint NativeReadFieldChannelsType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldChannelsType(
    IntPtr messageHandle, uint value);


  private static NativeReadFieldChannelsType native_read_field_channels = null;
  private static NativeWriteFieldChannelsType native_write_field_channels = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate uint NativeReadFieldFpsType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldFpsType(
    IntPtr messageHandle, uint value);


  private static NativeReadFieldFpsType native_read_field_fps = null;
  private static NativeWriteFieldFpsType native_write_field_fps = null;

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

  static CameraConfigurationMessage()
  {
    dllLoadUtils = DllLoadUtilsFactory.GetDllLoadUtils();
    IntPtr messageLibraryTypesupport = dllLoadUtils.LoadLibraryNoSuffix("nav_messages__rosidl_typesupport_c");
    IntPtr messageLibraryGenerator = dllLoadUtils.LoadLibraryNoSuffix("nav_messages__rosidl_generator_c");
    IntPtr messageLibraryIntro = dllLoadUtils.LoadLibraryNoSuffix("nav_messages__rosidl_typesupport_introspection_c");
    MessageTypeSupportPreload();

    IntPtr nativelibrary = dllLoadUtils.LoadLibrary("nav_messages_camera_configuration_message__rosidl_typesupport_c");
    IntPtr native_get_typesupport_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__CameraConfigurationMessage_native_get_type_support");
    CameraConfigurationMessage.native_get_typesupport = (NativeGetTypeSupportType)Marshal.GetDelegateForFunctionPointer(
      native_get_typesupport_ptr, typeof(NativeGetTypeSupportType));

    IntPtr native_create_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__CameraConfigurationMessage_native_create_native_message");
    CameraConfigurationMessage.native_create_native_message = (NativeCreateNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_create_native_message_ptr, typeof(NativeCreateNativeMessageType));

    IntPtr native_destroy_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__CameraConfigurationMessage_native_destroy_native_message");
    CameraConfigurationMessage.native_destroy_native_message = (NativeDestroyNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_destroy_native_message_ptr, typeof(NativeDestroyNativeMessageType));

    IntPtr native_get_nested_message_handle_header_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__CameraConfigurationMessage_native_get_nested_message_handle_header");
    CameraConfigurationMessage.native_get_nested_message_handle_header =
      (NativeGetNestedHandleHeaderType)Marshal.GetDelegateForFunctionPointer(
      native_get_nested_message_handle_header_ptr, typeof(NativeGetNestedHandleHeaderType));
    IntPtr native_read_field_height_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__CameraConfigurationMessage_native_read_field_height");
    CameraConfigurationMessage.native_read_field_height =
      (NativeReadFieldHeightType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_height_ptr, typeof(NativeReadFieldHeightType));

    IntPtr native_write_field_height_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__CameraConfigurationMessage_native_write_field_height");
    CameraConfigurationMessage.native_write_field_height =
      (NativeWriteFieldHeightType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_height_ptr, typeof(NativeWriteFieldHeightType));
    IntPtr native_read_field_width_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__CameraConfigurationMessage_native_read_field_width");
    CameraConfigurationMessage.native_read_field_width =
      (NativeReadFieldWidthType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_width_ptr, typeof(NativeReadFieldWidthType));

    IntPtr native_write_field_width_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__CameraConfigurationMessage_native_write_field_width");
    CameraConfigurationMessage.native_write_field_width =
      (NativeWriteFieldWidthType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_width_ptr, typeof(NativeWriteFieldWidthType));
    IntPtr native_read_field_channels_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__CameraConfigurationMessage_native_read_field_channels");
    CameraConfigurationMessage.native_read_field_channels =
      (NativeReadFieldChannelsType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_channels_ptr, typeof(NativeReadFieldChannelsType));

    IntPtr native_write_field_channels_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__CameraConfigurationMessage_native_write_field_channels");
    CameraConfigurationMessage.native_write_field_channels =
      (NativeWriteFieldChannelsType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_channels_ptr, typeof(NativeWriteFieldChannelsType));
    IntPtr native_read_field_fps_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__CameraConfigurationMessage_native_read_field_fps");
    CameraConfigurationMessage.native_read_field_fps =
      (NativeReadFieldFpsType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_fps_ptr, typeof(NativeReadFieldFpsType));

    IntPtr native_write_field_fps_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "nav_messages__msg__CameraConfigurationMessage_native_write_field_fps");
    CameraConfigurationMessage.native_write_field_fps =
      (NativeWriteFieldFpsType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_fps_ptr, typeof(NativeWriteFieldFpsType));
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

  public CameraConfigurationMessage()
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
    Height = native_read_field_height(handle);
    Width = native_read_field_width(handle);
    Channels = native_read_field_channels(handle);
    Fps = native_read_field_fps(handle);
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
    native_write_field_height(handle, Height);
    native_write_field_width(handle, Width);
    native_write_field_channels(handle, Channels);
    native_write_field_fps(handle, Fps);
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

  ~CameraConfigurationMessage()
  {
    Dispose();
  }

};  // class CameraConfigurationMessage
}  // namespace msg
}  // namespace nav_messages



