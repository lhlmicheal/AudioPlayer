#include "audioplaywidget.h"
#include "ui_audioplaywidget.h"

AudioPlayWidget::AudioPlayWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AudioPlayWidget)
{
    ui->setupUi(this);
    initPanel();
}

AudioPlayWidget::~AudioPlayWidget()
{
    delete ui;
}

void AudioPlayWidget::initPanel()
{
    ui->playSlider->setValue(0);
    ui->playSlider->setMinimum(0);
    ui->playSlider->setMaximum(100);
}

void AudioPlayWidget::playFileChanged(QString fileName, LrcInfo lrc)
{

}

void AudioPlayWidget::playProgressChanged(int progress)
{

}

void AudioPlayWidget::playModelChanged(int model)
{

}

void AudioPlayWidget::soundEnablChanged(int type)
{

}
