#ifndef CENTERWIDGET_H
#define CENTERWIDGET_H

#include <QWidget>

class QTimer;

namespace Ui {
class centerwidget;
}

class centerwidget : public QWidget
{
	Q_OBJECT

public:
	explicit centerwidget(QWidget *parent = 0);
	~centerwidget();

protected slots:
	void updateLabel();

private:
	Ui::centerwidget *ui;
	QTimer* m_timer;
	int m_nSecCount;
};

#endif // CENTERWIDGET_H
