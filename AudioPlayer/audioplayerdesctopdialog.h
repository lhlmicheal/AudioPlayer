#ifndef AUDIOPLAYERDESCTOPDIALOG_H
#define AUDIOPLAYERDESCTOPDIALOG_H

#include <QDialog>

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
    void updateAudioProgress();

private:
    Ui::AudioPlayerDesctopDialog *ui;
    QString mFiles;
};

#endif // AUDIOPLAYERDESCTOPDIALOG_H
