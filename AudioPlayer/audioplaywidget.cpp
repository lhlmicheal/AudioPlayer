#include "audioplaywidget.h"
#include "ui_audioplaywidget.h"
///test
#include <QFile>
#include <QFileDialog>

AudioPlayWidget::AudioPlayWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AudioPlayWidget)
{
    ui->setupUi(this);
    initPanel();
    connect(ui->fileSelectBtn, SIGNAL(clicked()), SLOT(openaudio()));
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

void AudioPlayWidget::openaudio()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "/home");
    if(fileName.isEmpty()) return;
    ui->lineEdit->setText(fileName);
    mControl.playFile(fileName);
}
