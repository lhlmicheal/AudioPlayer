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

signals:
    void fileSelect();

private slots:
    void elementAdded();
    void elementRemoved();
    void loadFinished();

private:
    Ui::AudioFilesDockWidget *ui;

    QString mSearchDirectory;
    static QString _LoadFileListPath;

};

#endif // AUDIOFILESDOCKWIDGET_H
