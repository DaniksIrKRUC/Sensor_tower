# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target nav_messages::nav_messages
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${nav_messages_TARGETS}.
if(nav_messages_TARGETS AND NOT TARGET nav_messages::nav_messages)
  add_library(nav_messages::nav_messages INTERFACE IMPORTED)
  set_target_properties(nav_messages::nav_messages PROPERTIES
    INTERFACE_LINK_LIBRARIES "${nav_messages_TARGETS}")
endif()
