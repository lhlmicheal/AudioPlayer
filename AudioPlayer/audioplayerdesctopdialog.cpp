#include "audioplayerdesctopdialog.h"
#include "ui_audioplayerdesctopdialog.h"

#include <QFileDialog>
#include <QSize>
AudioPlayerDesctopDialog::AudioPlayerDesctopDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AudioPlayerDesctopDialog)
{
    this->setFixedSize(QSize(500, 260));
    this->setWindowTitle(tr("Audio Player"));
    ui->setupUi(this);
    connect(ui->selectBtn, SIGNAL(clicked()), SLOT(fileSelected()));
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
}

void AudioPlayerDesctopDialog::updateAudioProgress()
{

}
