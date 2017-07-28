//license-placeholder 2017-7-14 Tao Cheng
#include "audiomainwindow.h"
#include "audioplayerdesctopdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    AudioMainWindow w;
//    w.show();
    AudioPlayerDesctopDialog w;
    w.show();

    return a.exec();
}
