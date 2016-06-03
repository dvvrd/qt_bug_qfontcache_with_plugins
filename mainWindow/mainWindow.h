#pragma once

#include <QtCore/QPluginLoader>
#include <QtWidgets/QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private slots:
	void loadPlugin();
	void unloadPlugin();

private:
	Ui::MainWindow *mUi;
	QPluginLoader *mLoader = nullptr;
};
