#include "centerwidget.h"
#include "ui_centerwidget.h"

centerwidget::centerwidget(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::centerwidget)
{
	ui->setupUi(this);
}

centerwidget::~centerwidget()
{
	delete ui;
}
