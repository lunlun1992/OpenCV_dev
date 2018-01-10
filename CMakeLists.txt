cmake_minimum_required(VERSION 2.8.12)

PROJECT(OpenCV-dev)
find_package(OpenCV REQUIRED)
# option(OpenCV_include_dirs "")

# if(LINUX)
#   include_directories(${OpenCV_include_dirs})
# endif()

MACRO(add_example name)
  ADD_EXECUTABLE(${name} ${name}.cpp)
  TARGET_LINK_LIBRARIES(${name} ${OpenCV_LIBS})
ENDMACRO()

add_example(readWriteDisplay)