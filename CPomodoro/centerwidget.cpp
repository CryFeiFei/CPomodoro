#include "centerwidget.h"
#include "ui_centerwidget.h"

#include <QLCDNumber>
#include <QPalette>
#include <QTimer>
#include <QTime>

centerwidget::centerwidget(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::centerwidget),
	m_nSecCount(0),
	m_timer(nullptr)
{
	ui->setupUi(this);
	m_timer = new QTimer(this);
	m_timer->setInterval(1000);
	connect(m_timer, &QTimer::timeout, this, &centerwidget::updateLabel);
	m_nSecCount = 25 * 60; // 25 min

	auto ftimerStart = [this]()->void
	{

	};
	connect(ui->startButton, &QToolButton::click, &ftimerStart);
}

centerwidget::~centerwidget()
{
	delete ui;
}

void centerwidget::updateLabel()
{

}
