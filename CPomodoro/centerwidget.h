#ifndef CENTERWIDGET_H
#define CENTERWIDGET_H

#include <QWidget>

namespace Ui {
class centerwidget;
}

class centerwidget : public QWidget
{
	Q_OBJECT

public:
	explicit centerwidget(QWidget *parent = 0);
	~centerwidget();

private:
	Ui::centerwidget *ui;
};

#endif // CENTERWIDGET_H
