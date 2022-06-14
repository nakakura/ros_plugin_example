cmake_minimum_required(VERSION 3.0.2)
project(plugin_impl)


find_package(catkin REQUIRED COMPONENTS
  plugin_base
  pluginlib
  roscpp
)

#INCLUDE_DIRSを書き忘れると、include/plugin_implが外部から読めない
catkin_package(
        INCLUDE_DIRS
        include
        LIBRARIES
        ${PROJECT_NAME}
        CATKIN_DEPENDS
        DEPENDS
)

include_directories(
 include
  ${catkin_INCLUDE_DIRS}
)

include_directories(include)
add_library(${PROJECT_NAME} src/plugin_impl.cpp)
