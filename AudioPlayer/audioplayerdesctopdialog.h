#ifndef AUDIOPLAYERDESCTOPDIALOG_H
#define AUDIOPLAYERDESCTOPDIALOG_H

#include <QDialog>
#include <audioplayercontrol.h>

namespace Ui {
class AudioPlayerDesctopDialog;
}

class AudioPlayerDesctopDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AudioPlayerDesctopDialog(QWidget *parent = 0);
    ~AudioPlayerDesctopDialog();

private slots:
    void fileSelected();
    void updateAudioProgress(quint64 percent);
    void soundEnabled(bool);
    void error(QString err);
    void audioFileChanged(QString fileName, qint64 size);

private:
    Ui::AudioPlayerDesctopDialog *ui;
    QString mFiles;
    AudioPayerManager mAudioControl;
    void initDialog();
};

#endif // AUDIOPLAYERDESCTOPDIALOG_H
