#include "cmainwidget.h"
#include "ui_cmainwidget.h"

CMainWidget::CMainWidget(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::cmainwidget)
{
	ui->setupUi(this);
}

CMainWidget::~CMainWidget()
{

}
