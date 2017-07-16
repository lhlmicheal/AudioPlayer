#ifndef AUDIOFILESDIALOG_H
#define AUDIOFILESDIALOG_H

#include <QDialog>

namespace Ui {
class AudioFilesDialog;
}

class AudioFilesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AudioFilesDialog(QWidget *parent = 0);
    ~AudioFilesDialog();

private:
    Ui::AudioFilesDialog *ui;
    void initDialog();
};

#endif // AUDIOFILESDIALOG_H
