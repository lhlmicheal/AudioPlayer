//license-placeholder 2017-8-11 Tao Cheng
#ifndef AUDIOSTATUSWIDGET_H
#define AUDIOSTATUSWIDGET_H

#include <QWidget>

namespace Ui {
class AudioStatusWidget;
}

class AudioStatusWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AudioStatusWidget(QWidget *parent = 0);
    ~AudioStatusWidget();

private:
    Ui::AudioStatusWidget *ui;
};

#endif // AUDIOSTATUSWIDGET_H
