//license-placeholder 2017-7-14 Tao Cheng
#ifndef AUDIOMAINWINDOW_H
#define AUDIOMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class AudioMainWindow;
}

class AudioMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AudioMainWindow(QWidget *parent = 0);
    ~AudioMainWindow();

private:
    Ui::AudioMainWindow *ui;
};

#endif // AUDIOMAINWINDOW_H
