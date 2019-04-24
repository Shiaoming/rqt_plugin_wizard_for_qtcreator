#include <rqt_%{Plugin}/rqt_%{Plugin}.h>

#include <pluginlib/class_list_macros.h>
#include <ros/master.h>

namespace rqt_%{Plugin} {


%{CN}::%{CN}() :
    rqt_gui_cpp::Plugin()
{
    // Constructor is called first before initPlugin function, needless to say.
    setObjectName("%{CN}");
}

void rqt_%{Plugin}::%{CN}::initPlugin(qt_gui_cpp::PluginContext &context)
{
    widget = new %{CN}Widget();
    context.addWidget(widget);
}

void rqt_%{Plugin}::%{CN}::shutdownPlugin()
{
    // TODO unregister all publishers here
}

void rqt_%{Plugin}::%{CN}::saveSettings(qt_gui_cpp::Settings &plugin_settings, qt_gui_cpp::Settings &instance_settings) const
{
    // TODO save intrinsic configuration, usually using:
    // instance_settings.setValue(k, v)
}

void rqt_%{Plugin}::%{CN}::restoreSettings(const qt_gui_cpp::Settings &plugin_settings, const qt_gui_cpp::Settings &instance_settings)
{
    // TODO restore intrinsic configuration, usually using:
    // v = instance_settings.value(k)
}

} // end namespace rqt_%{Plugin}

PLUGINLIB_EXPORT_CLASS(rqt_%{Plugin}::%{CN}, rqt_gui_cpp::Plugin)
