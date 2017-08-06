#include "audiofilesdockwidget.h"
#include "ui_audiofilesdockwidget.h"

AudioFilesDockWidget::AudioFilesDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::AudioFilesDockWidget)
{
    ui->setupUi(this);
}

AudioFilesDockWidget::~AudioFilesDockWidget()
{
    delete ui;
}
