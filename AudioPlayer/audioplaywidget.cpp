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

void AudioPlayWidget::initPanel()
{

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
