#ifndef AUDIOFILESDOCKWIDGET_H
#define AUDIOFILESDOCKWIDGET_H

#include <QDockWidget>

namespace Ui {
class AudioFilesDockWidget;
}

class AudioFilesDockWidget : public QDockWidget
{
    Q_OBJECT

public:
    explicit AudioFilesDockWidget(QWidget *parent = 0);
    ~AudioFilesDockWidget();

private:
    Ui::AudioFilesDockWidget *ui;
};

#endif // AUDIOFILESDOCKWIDGET_H
