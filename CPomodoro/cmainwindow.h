#ifndef CMAINWINDOW_H
#define CMAINWINDOW_H

#include <QMainWindow>

class centerwidget;

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
//	Ui::CMainWindow *ui;
	centerwidget* m_centerwidget;
};

#endif // CMAINWINDOW_H
