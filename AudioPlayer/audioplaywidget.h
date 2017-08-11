#ifndef AUDIOPLAYWIDGET_H
#define AUDIOPLAYWIDGET_H

#include <QWidget>
#include "datadefine.h"

namespace Ui {
class AudioPlayWidget;
}

class AudioPlayWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AudioPlayWidget(QWidget *parent = 0);
    ~AudioPlayWidget();

protected:
    void initPanel();

signals:
    void progressChange(int progress);

private slots:
    void playFileChanged(QString fileName, LrcInfo lrc);
    void playProgressChanged(int progress);
    void playModelChanged(int model);
    void soundEnablChanged(int type);

private:
    Ui::AudioPlayWidget *ui;
};

#endif // AUDIOPLAYWIDGET_H
