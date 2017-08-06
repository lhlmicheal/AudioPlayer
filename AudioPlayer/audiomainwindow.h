#ifndef AUDIOMAINWINDOW_H
#define AUDIOMAINWINDOW_H

#include <QMainWindow>
class AudioPlayWidget;
class AudioFilesDockWidget;
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
    AudioPlayWidget *mPlayWidget;
    AudioFilesDockWidget *mFilesWidget;
    void initMainWidget();
};

#endif // AUDIOMAINWINDOW_H
