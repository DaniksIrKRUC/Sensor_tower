import os
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_xml.launch_description_sources import XMLLaunchDescriptionSource


def generate_launch_description():
  os_launch = IncludeLaunchDescription(
      PythonLaunchDescriptionSource([os.path.join(
         get_package_share_directory('ouster_ros'), 'launch'),
         '/driver.launch.py'])
      )
  nav_launch = IncludeLaunchDescription(
      PythonLaunchDescriptionSource([os.path.join(
         get_package_share_directory('nav_launch'), 'launch'),
         '/launch_point_cloud_publisher.launch.py'])
      )
  web_launch = IncludeLaunchDescription(
      XMLLaunchDescriptionSource([os.path.join(
         get_package_share_directory('rosbridge_server'), 'launch'),
         '/rosbridge_websocket_launch.xml'])
      )
  realsense_launch = IncludeLaunchDescription(
      PythonLaunchDescriptionSource([os.path.join(
         get_package_share_directory('realsense2_camera'), 'launch'),
         '/rs_launch.py'])
      )
  vectornav_launch = IncludeLaunchDescription(
      PythonLaunchDescriptionSource([os.path.join(
         get_package_share_directory('vectornav'), 'launch'),
         '/vectornav.launch.py'])
      )
  
  return LaunchDescription([
      os_launch,
      nav_launch,
      web_launch,
      realsense_launch,
      vectornav_launch,
      Node(
        package="py_pubsub",
        parameters=[],
        executable="talker"
    )
   ])
