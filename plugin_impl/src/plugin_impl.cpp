
#include <pluginlib/class_list_macros.h>
#include <plugin_base/base.h>
#include <plugin_impl/plugin_impl.h>

PLUGINLIB_EXPORT_CLASS(plugin_impl::Triangle, polygon_base::RegularPolygon)
PLUGINLIB_EXPORT_CLASS(plugin_impl::Square, polygon_base::RegularPolygon)