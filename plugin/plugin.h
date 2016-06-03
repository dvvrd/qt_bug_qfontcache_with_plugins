#pragma once

#include <QtCore/QObject>
#include <mainWindow/pluginInterface.h>

class QMainWindow;
class Widget;

class Plugin : public QObject, public PluginInterface
{
	Q_OBJECT
	Q_INTERFACES(PluginInterface)
	Q_PLUGIN_METADATA(IID "test.TestPlugin")

public:
	Plugin();
	~Plugin();

	void init(QMainWindow *mainWindow) override;

private:
	Widget *mWidget;
};
