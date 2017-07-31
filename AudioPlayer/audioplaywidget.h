#ifndef AUDIOPLAYWIDGET_H
#define AUDIOPLAYWIDGET_H

#include <QWidget>

namespace Ui {
class AudioPlayWidget;
}

class AudioPlayWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AudioPlayWidget(QWidget *parent = 0);
    ~AudioPlayWidget();

private:
    Ui::AudioPlayWidget *ui;
};

#endif // AUDIOPLAYWIDGET_H
