#include "cmainwindow.h"
#include "ui_cmainwindow.h"

#include "centerwidget.h"

CMainWindow::CMainWindow(QWidget *parent) :
	QMainWindow(parent)
//	ui(new Ui::CMainWindow)
{
//	ui->setupUi(this);
//	centralWidget()->setParent(0);
	m_centerwidget = new centerwidget(this);
//	m_centerwidget->
	this->setCentralWidget(m_centerwidget);

	this->resize(200, 500);
}

CMainWindow::~CMainWindow()
{
//	delete ui;
}
