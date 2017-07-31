#include "audioplaywidget.h"
#include "ui_audioplaywidget.h"

AudioPlayWidget::AudioPlayWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AudioPlayWidget)
{
    ui->setupUi(this);
}

AudioPlayWidget::~AudioPlayWidget()
{
    delete ui;
}
