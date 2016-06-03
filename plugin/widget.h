#pragma once

#include <QtWidgets/QWidget>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
	Q_OBJECT
public:
	Widget();

private:
	Ui::Widget *mUi;
};
