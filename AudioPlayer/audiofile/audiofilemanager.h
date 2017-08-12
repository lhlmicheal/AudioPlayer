//license-placeholder 2017-8-11 Liu hai long
#ifndef AUDIOFILEMANAGER_H
#define AUDIOFILEMANAGER_H
#include <QObject>

class AudioFileManager : QObject
{
    Q_OBJECT
public:
    static AudioFileManager *instance();
    static void deteleInstance();

    bool loadFile(QString &err);

private slots:
    void findByDirection(int direction);


private:
    static AudioFileManager *_audiofilemanager;
};
#endif // AUDIOFILEMANAGER_H
