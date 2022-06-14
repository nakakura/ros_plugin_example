cmake_minimum_required(VERSION 3.0.2)
project(plugin_base)

find_package(catkin REQUIRED COMPONENTS
  pluginlib
  roscpp
)

#INCLUDE_DIRSを書き忘れると、include/plugin_baseが外部から読めない
catkin_package(
        INCLUDE_DIRS
        include
        LIBRARIES
        ${PROJECT_NAME}
        CATKIN_DEPENDS
        DEPENDS
)

include_directories(include
        ${catkin_INCLUDE_DIRS}
        )
# ${PROJECT_NAME}で何か生成しないとplugin_baseのリポジトリのビルド完了済みとして外部から認識されず、find_packageすることができない
add_library(${PROJECT_NAME} src/example_plugin.cpp)
