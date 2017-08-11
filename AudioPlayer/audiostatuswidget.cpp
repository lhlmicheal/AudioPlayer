//license-placeholder 2017-8-11 Tao Cheng
#include "audiostatuswidget.h"
#include "ui_audiostatuswidget.h"

AudioStatusWidget::AudioStatusWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AudioStatusWidget)
{
    ui->setupUi(this);
}

AudioStatusWidget::~AudioStatusWidget()
{
    delete ui;
}
