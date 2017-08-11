#include "audiomainwindow.h"
#include "ui_audiomainwindow.h"
#include "audioplaywidget.h"
#include "audiofilesdockwidget.h"
#include "audiostatuswidget.h"

AudioMainWindow::AudioMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AudioMainWindow)
    , mPlayWidget(new AudioPlayWidget)
    , mFilesWidget(new AudioFilesDockWidget)
    , mStatusWidget(new AudioStatusWidget)
{
    ui->setupUi(this);
    initMainWidget();
}

AudioMainWindow::~AudioMainWindow()
{
    delete ui;
}

void AudioMainWindow::initMainWidget()
{
    this->setCentralWidget(mPlayWidget);
    this->addDockWidget(Qt::DockWidgetArea::RightDockWidgetArea, mFilesWidget);
    this->statusBar()->addWidget(mStatusWidget, 0);
}
