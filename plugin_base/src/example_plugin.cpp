#include <pluginlib/class_list_macros.h>
#include <plugin_base/base.h>
#include <plugin_base/example_plugin.h>

PLUGINLIB_EXPORT_CLASS(example_plugin::Triangle, polygon_base::RegularPolygon)
PLUGINLIB_EXPORT_CLASS(example_plugin::Square, polygon_base::RegularPolygon)