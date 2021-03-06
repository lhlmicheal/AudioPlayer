#ifndef AUDIOPLAYWIDGET_H
#define AUDIOPLAYWIDGET_H

#include <QWidget>
#include "audioplay/playaudiocontrol.h"
#include "define/lrcdefine.h"

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
    void playProgressChanged(qint64 progress);
    void playModelChanged(int model);
    void soundEnablChanged(int type);
    //
    void pauseChanged(int state);
    void volumeChanged(int value);

    ///test
    void openaudio();

private:
    Ui::AudioPlayWidget *ui;
    PlayAudioControl mControl;
};

#endif // AUDIOPLAYWIDGET_H
