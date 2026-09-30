from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
  return LaunchDescription([

    Node(
        package="nav_radar",
        parameters=["../../nav_radar/config/colossus_subscriber_laser_scan_publisher.yaml"],
        executable="colossus_subscriber_laser_scan_publisher"
    ),

    Node(
        package="tf2_ros",
        arguments = ["0", "0", "0", "0", "0", "0", "map", "laser_frame"],
        executable="static_transform_publisher"
    ),

    Node(
        package="rviz2",
        arguments=["-d../../nav_rviz/laser_scan_view.rviz"],
        executable="rviz2"
    )
  ])