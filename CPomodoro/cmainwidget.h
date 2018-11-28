//这个类主要是主界面。
//titlebar + viewwidget

#ifndef CMAINWIDGET_H
#define CMAINWIDGET_H

#include <QWidget>

namespace Ui {
class cmainwidget;
}

class CMainWidget : public QWidget
{
	Q_OBJECT
public:
	explicit CMainWidget(QWidget *parent = nullptr);
	~CMainWidget();

private:
	Ui::cmainwidget* ui;

signals:

public slots:
};

#endif // CMAINWIDGET_H
