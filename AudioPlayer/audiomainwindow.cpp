#include "audiomainwindow.h"
#include "ui_audiomainwindow.h"
#include "audioplaywidget.h"
#include "audiofilesdockwidget.h"

AudioMainWindow::AudioMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AudioMainWindow)
    , mPlayWidget(new AudioPlayWidget)
    , mFilesWidget(new AudioFilesDockWidget)
{
    ui->setupUi(this);
//    this->setFixedHeight(240);
    initMainWidget();
}

AudioMainWindow::~AudioMainWindow()
{
    delete ui;
}

void AudioMainWindow::initMainWidget()
{
//    this->setContentsMargins(10, 10, 10, 10);
    this->setCentralWidget(mPlayWidget);
//    mPlayWidget->setFixedSize(QSize(440, 240));
    this->addDockWidget(Qt::DockWidgetArea::RightDockWidgetArea, mFilesWidget);
}
