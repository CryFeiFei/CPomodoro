#include "cmainwindow.h"
#include "ui_cmainwindow.h"

#include "centerwidget.h"

#include <QSystemTrayIcon>

CMainWindow::CMainWindow(QWidget *parent) :
	QMainWindow(parent)
{
	m_centerwidget = new centerwidget(this);
	m_systemTrayIcon = new QSystemTrayIcon(this);
	setCentralWidget(m_centerwidget);
	resize(200, 500);
}

CMainWindow::~CMainWindow()
{
}
