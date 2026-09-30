from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
  return LaunchDescription([

    Node(
        package="nav_radar",
        parameters=["../../nav_radar/config/native_point_cloud_publisher.yaml"],
        executable="native_point_cloud_publisher"
    ),

    Node(
        package="tf2_ros",
        arguments = ["0", "0", "0", "0", "0", "0", "map", "point_cloud"],
        executable="static_transform_publisher"
    ),

    Node(
        package="rviz2",
        arguments=["-d../../nav_rviz/native_point_cloud_view.rviz"],
        executable="rviz2"
    )
  ])