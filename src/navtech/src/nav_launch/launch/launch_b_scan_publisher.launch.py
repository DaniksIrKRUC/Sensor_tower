from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
  return LaunchDescription([

    Node(
        package="nav_radar",
        parameters=["../../nav_radar/config/b_scan_publisher.yaml"],
        executable="b_scan_publisher"
    ),

    Node(
        package="tf2_ros",
        arguments = ["0", "0", "0", "0", "0", "0", "map", "b_scan_image"],
        executable="static_transform_publisher"
    ),

    Node(
        package="rviz2",
        arguments=["-d../../nav_rviz/b_scan_view.rviz"],
        executable="rviz2"
    )
  ])