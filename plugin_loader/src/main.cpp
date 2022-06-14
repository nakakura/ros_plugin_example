#include <pluginlib/class_loader.h>
#include <plugin_impl/plugin_impl.h>

int main(int argc, char** argv)
{
    pluginlib::ClassLoader<polygon_base::RegularPolygon> poly_loader("plugin_impl", "polygon_base::RegularPolygon");

    try
    {
        boost::shared_ptr<polygon_base::RegularPolygon> triangle = poly_loader.createInstance("plugin_impl::Triangle");
        triangle->initialize(10.0);

        boost::shared_ptr<polygon_base::RegularPolygon> square = poly_loader.createInstance("plugin_impl::Square");
        square->initialize(10.0);

        ROS_INFO("Triangle area: %.2f", triangle->area());
        ROS_INFO("Square area: %.2f", square->area());
    }
    catch(pluginlib::PluginlibException& ex)
    {
        ROS_ERROR("The plugin failed to load for some reason. Error: %s", ex.what());
    }

    return 0;
}