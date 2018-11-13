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
	connect(m_timer, &QTimer::timeout, this, &centerwidget::updateLabel);

	auto ftimerStart = [this]()->void
	{
		m_nSecCount = 25 * 60; // 25 min
		m_timer->start(1000);
	};

	connect(ui->startButton, &QToolButton::clicked, ftimerStart);
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
