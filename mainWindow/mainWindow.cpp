#include "mainWindow.h"
#include "ui_mainWindow.h"
#include "pluginInterface.h"

MainWindow::MainWindow(QWidget *parent) 
	: QMainWindow(parent)
	, mUi(new Ui::MainWindow)
{
	mUi->setupUi(this);
	connect(mUi->loadButton, &QPushButton::clicked, this, &MainWindow::loadPlugin);
	connect(mUi->unloadButton, &QPushButton::clicked, this, &MainWindow::unloadPlugin);
}

MainWindow::~MainWindow()
{
	// Unloading plugin leaves Arial font 'hanging' in font cache, that causes bad things.
	unloadPlugin();
	delete mUi;
}

void MainWindow::loadPlugin()
{
	mLoader = new QPluginLoader("plugin.dll");
	mLoader->load();
	PluginInterface * const plugin = qobject_cast<PluginInterface *>(mLoader->instance());
	plugin->init(this);
	mUi->label->setText("Plugin loaded");
}

void MainWindow::unloadPlugin()
{
	if (mLoader) {
		mLoader->unload();
		delete mLoader;
		mLoader = nullptr;
		mUi->label->setText("Plugin is NOT loaded");
	}
}
