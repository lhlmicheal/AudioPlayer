#include "audiomainwindow.h"
#include "ui_audiomainwindow.h"
#include "audioplaywidget.h"

AudioMainWindow::AudioMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AudioMainWindow)
    , mPlayWidget(new AudioPlayWidget)
{
    ui->setupUi(this);
    initCenterWidget();
}

AudioMainWindow::~AudioMainWindow()
{
    delete ui;
}

void AudioMainWindow::initCenterWidget()
{
    this->setContentsMargins(10, 10, 10, 10);
    this->setCentralWidget(mPlayWidget);
    mPlayWidget->setFixedSize(QSize(440, 210));
}
