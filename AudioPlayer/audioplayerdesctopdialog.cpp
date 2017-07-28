#include "audioplayerdesctopdialog.h"
#include "ui_audioplayerdesctopdialog.h"

#include "audiodefine.h"
#include <QFileDialog>
#include <QIcon>
#include <QMessageBox>
#include <QSize>

AudioPlayerDesctopDialog::AudioPlayerDesctopDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AudioPlayerDesctopDialog)
{
    this->setFixedSize(QSize(500, 260));
    this->setWindowTitle(tr("Audio Player"));
    ui->setupUi(this);
    initDialog();
    connect(ui->selectBtn, SIGNAL(clicked()), SLOT(fileSelected()));
    connect(ui->stopBtn, SIGNAL(clicked()), &mAudioControl, SLOT(playStop()));
    connect(ui->playOrPauseBtn, SIGNAL(clicked()), &mAudioControl, SLOT(playOrPause()));

    connect(ui->soundBtn, SIGNAL(toggled(bool)), SLOT(soundEnabled(bool)));
//    connect(ui->playProSlider, SIGNAL(valueChanged(int)), &mAudioControl, SLOT(playSliderChanged(int)));
    connect(ui->soundVolumnSlider, SIGNAL(valueChanged(int)), &mAudioControl, SLOT(volumeChanged(int)));
    connect(&mAudioControl, SIGNAL(errorMsg(QString)), SLOT(error(QString)));
    connect(&mAudioControl, SIGNAL(playProgressChanged(quint64)), SLOT(updateAudioProgress(quint64)));
//    connect(&mAudioControl, SIGNAL(audioFilechange(QString, int)), SLOT(audioFileChanged(QString, int)));
}

AudioPlayerDesctopDialog::~AudioPlayerDesctopDialog()
{
    delete ui;
}

void AudioPlayerDesctopDialog::fileSelected()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                     "/home",
                                                     tr("Audio (*.mp3)"));
    if(fileName.isEmpty()) return;
    mFiles = fileName;
    ui->lineEdit->setText(mFiles);
    mAudioControl.playAudio(fileName);
}

void AudioPlayerDesctopDialog::updateAudioProgress(quint64 percent)
{
    auto value = ui->playProSlider->value();
    if(value != percent)
        ui->playProSlider->setValue(percent);
}

void AudioPlayerDesctopDialog::soundEnabled(bool enable)
{
    if(enable)//被选中
        ui->soundBtn->setIcon(QIcon(":/image/32_32/audio_sound_off.png"));
    else
        ui->soundBtn->setIcon(QIcon(":/image/32_32/audio_sound_on.png"));
    ui->soundVolumnSlider->setEnabled(!enable);
    mAudioControl.enableVolume(!enable);
}

void AudioPlayerDesctopDialog::error(QString err)
{
    QMessageBox::critical(this, tr("Audio playing"), err);
}

void AudioPlayerDesctopDialog::audioFileChanged(QString fileName, qint64 size)
{
    ui->playProSlider->setMaximum(size);
    ui->playProSlider->setValue(0);
}

void AudioPlayerDesctopDialog::initDialog()
{
    ui->soundVolumnSlider->setValue(Default_Volume);
}
