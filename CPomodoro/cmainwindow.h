#ifndef CMAINWINDOW_H
#define CMAINWINDOW_H

#include <QMainWindow>

class centerwidget;
class QSystemTrayIcon;

//namespace Ui {
//class CMainWindow;
//}

class CMainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit CMainWindow(QWidget *parent = 0);
	~CMainWindow();

private:
	centerwidget* m_centerwidget;
	QSystemTrayIcon*	m_systemTrayIcon;
};

#endif // CMAINWINDOW_H
