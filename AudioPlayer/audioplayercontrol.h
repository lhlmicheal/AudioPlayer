#ifndef AUDIOPALYERCONTROL_H
#define AUDIOPALYERCONTROL_H

#include <QObject>
#include <QMediaPlayer>
#include <QMediaPlaylist>

class QFile;
class AudioPayerManager: public QObject
{
    Q_OBJECT
public:
    enum Statue
    {
        play,
        pause,
        stop
    };
    enum Model
    {
        cycle,
        order
    };
    explicit AudioPayerManager(QObject *parent = nullptr);
    void playAudio(QString fileName);
    void enableVolume(bool);

signals:
    void errorMsg(QString err);
    void playProgressChanged(quint64 percent);
    void audioFilechange(QString file, quint64 size);

private slots:
    void positionChanged(qint64 pos);
    void playSliderChanged(quint64);
    void palyStatueChanged(Statue);
    void playOrPause();
    void playStop();
    void volumeChanged(int percent);

private:
    QMediaPlayer *mMediaPlayer;
    QMediaPlaylist *mMediaPlayerList;
    QFile *mFile;
    Statue mStatue;
    Model mModel;
    bool mSoundEnable;
    int mCurVolume;

};
#endif // AUDIOPALYERMANAGER_H
