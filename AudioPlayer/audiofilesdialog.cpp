#include "audiofilesdialog.h"
#include "ui_audiofilesdialog.h"
#include <QIcon>

AudioFilesDialog::AudioFilesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AudioFilesDialog)
{
    ui->setupUi(this);
}

AudioFilesDialog::~AudioFilesDialog()
{
    delete ui;
}

void AudioFilesDialog::initDialog()
{

}
