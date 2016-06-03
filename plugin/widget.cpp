#include "widget.h"
#include "ui_widget.h"

Widget::Widget()
	: mUi(new Ui::Widget)
{
	mUi->setupUi(this);
}
