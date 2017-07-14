//license-placeholder 2017-7-14 Tao Cheng
#include "audiomainwindow.h"
#include "ui_audiomainwindow.h"

AudioMainWindow::AudioMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AudioMainWindow)
{
    ui->setupUi(this);
}

AudioMainWindow::~AudioMainWindow()
{
    delete ui;
}
