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
    connect(ui->playOrPauseBtn, SIGNAL(clicked()), &mControl, SLOT(pauseChanged()));
    connect(ui->stopBtn, SIGNAL(clicked()), &mControl, SLOT(stoped()));
    connect(ui->fileSelectBtn, SIGNAL(clicked()), SLOT(openaudio()));

    connect(ui->soundBtn, SIGNAL(clicked()), &mControl, SLOT(soundChanged()));
    connect(ui->volumeSlider, SIGNAL(valueChanged(int)), &mControl, SLOT(volumeChanged(int)));
    connect(&mControl, SIGNAL(pauseChange(int)), SLOT(pauseChanged(int)));
    connect(&mControl, SIGNAL(volumeChange(int)), SLOT(pauseChanged(int)));
    connect(&mControl, SIGNAL(soundChange(int)), SLOT(soundEnablChanged(int)));
    connect(&mControl, SIGNAL(progressUpdata(qint64)), SLOT(playProgressChanged(qint64)));
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

    ui->volumeSlider->setValue(SOUND_DEFAULT);
    ui->volumeSlider->setMinimum(0);
    ui->volumeSlider->setMaximum(100);
}

void AudioPlayWidget::playFileChanged(QString fileName, LrcInfo lrc)
{
    Q_UNUSED(fileName)
    Q_UNUSED(lrc)
}

void AudioPlayWidget::playProgressChanged(qint64 progress)
{
    int pos = progress / 1000;
    ui->playSlider->setValue(pos);
    Q_UNUSED(progress)
}

void AudioPlayWidget::playModelChanged(int model)
{
Q_UNUSED(model)
}

void AudioPlayWidget::soundEnablChanged(int type)
{
    switch (type) {
    case PlayAudioControl::SoundState::extroverte:
    {
        ui->soundBtn->setIcon(QIcon(QLatin1String(":image/32_32/audio_sound_on.png")));
        ui->volumeSlider->setEnabled(true);
    }
        break;
    case PlayAudioControl::SoundState::silence:
    {
        ui->soundBtn->setIcon(QIcon(QLatin1String(":image/32_32/audio_sound_off.png")));
        ui->volumeSlider->setEnabled(false);
    }
        break;
    default:
        break;
    }
}

void AudioPlayWidget::pauseChanged(int state)
{
    switch (state) {
    case PlayAudioControl::AudioState::play:
    case PlayAudioControl::AudioState::stop:
        ui->playOrPauseBtn->setIcon(QIcon(QLatin1String(":image/32_32/play_button.png")));
        break;
    case PlayAudioControl::AudioState::pause:
        ui->playOrPauseBtn->setIcon(QIcon(QLatin1String(":image/32_32/pause.png")));
        break;
    default:
        break;
    }
}

void AudioPlayWidget::volumeChanged(int value)
{
    if(ui->volumeSlider->value() == value) return;
    ui->volumeSlider->setValue(value);
}

void AudioPlayWidget::openaudio()
{
//    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
//                                                    "/home");
//    if(fileName.isEmpty()) return;
    QString fileName = QLatin1String("C:/Users/Administrator/Desktop/Soledad.mp3");
    ui->lineEdit->setText(fileName);
    mControl.playFile(fileName);
}
