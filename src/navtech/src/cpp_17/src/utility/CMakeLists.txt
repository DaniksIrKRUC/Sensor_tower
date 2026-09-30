cmake_minimum_required(VERSION 3.16)

project(sdk_utilities C CXX)

add_library(utility STATIC
    ${PROJECT_SOURCE_DIR}/Log.cpp
    ${PROJECT_SOURCE_DIR}/Option_parser.cpp
    ${PROJECT_SOURCE_DIR}/Signal_handler.cpp
    ${PROJECT_SOURCE_DIR}/Time_utils.cpp
    ${PROJECT_SOURCE_DIR}/Timer.cpp
    ${PROJECT_SOURCE_DIR}/Cartesian_coordinate.cpp
    ${PROJECT_SOURCE_DIR}/Polar_coordinate.cpp

    ${PROJECT_SOURCE_DIR}/threading/Active.cpp
    ${PROJECT_SOURCE_DIR}/threading/Mutex.cpp
)

target_include_directories(utility INTERFACE
    ${PROJECT_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/threading
)

target_include_directories(utility PRIVATE
    ${PROJECT_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/threading
)

target_link_libraries(utility PRIVATE ${CMAKE_THREAD_LIBS_INIT})


