#include "plugin.h"
#include "widget.h"

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QDockWidget>

Plugin::Plugin()
{
}

Plugin::~Plugin()
{
	delete mWidget;
}

void Plugin::init(QMainWindow *mainWindow)
{
	mWidget = new Widget;
	QDockWidget *dock = new QDockWidget(mainWindow);
	dock->setWidget(mWidget);
	mWidget->setParent(dock);
	mainWindow->addDockWidget(Qt::LeftDockWidgetArea, dock);
}
