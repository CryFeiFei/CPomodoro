#include "cmainwidget.h"
#include "ui_cmainwidget.h"

#include <QLayout>
#include <QSplitter>

CMainWidget::CMainWidget(QWidget *parent) :
	QWidget(parent),
	m_ui(new Ui::cmainwidget)
{
	m_ui->setupUi(this);
	m_titleMenuBar = new QWidget(this);
	m_mainWidget = new QSplitter(this);

	m_ui->mainLayout->addWidget(m_titleMenuBar);
	m_ui->mainLayout->addWidget(m_mainWidget);

}

CMainWidget::~CMainWidget()
{

}
