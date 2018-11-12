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
//	m_timer->setInterval(1000);
	connect(m_timer, &QTimer::timeout, this, &centerwidget::updateLabel);

	auto ftimerStart = [=]()
	{
//		m_nSecCount = 25 * 60; // 25 min
//		m_timer->start(1000);
	};
	connect(ui->startButton, &QToolButton::click, [this]()
	{
		m_nSecCount = 25 * 60; // 25 min
		m_timer->start(1000);
	});

//	auto ftimerReset = [this]()->void
//	{
//		m_timer->stop();
//		m_nSecCount = 0;
//	};
//	connect(ui->resetButton, &QToolButton::click, &ftimerReset);
}

centerwidget::~centerwidget()
{
	delete ui;
}

void centerwidget::updateLabel()
{
	if (!m_nSecCount)
		m_timer->stop();

	ui->lcdNumber->display(QString::number(m_nSecCount));
	m_nSecCount --;
}
