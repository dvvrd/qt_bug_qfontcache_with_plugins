#pragma once

class QMainWindow;

class PluginInterface
{
public:
	virtual ~PluginInterface() {}
	virtual void init(QMainWindow *mainWindow) = 0;
};

Q_DECLARE_INTERFACE(PluginInterface, "PluginInterface/0.1")
