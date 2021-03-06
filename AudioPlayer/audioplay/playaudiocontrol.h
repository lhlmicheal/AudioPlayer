//license-placeholder 2017-8-11 Liu Hai Long
#ifndef PLAYAUDIOCONTROL_H
#define PLAYAUDIOCONTROL_H
#include <QObject>
class QMediaPlayer;

#define SOUND_DEFAULT 50
class PlayAudioControl : public QObject
{
    Q_OBJECT
public:
    enum AudioState
    {
        unknown = 0,
        play = 1,
        pause = 2,
        stop = 3
    };
    enum SoundState
    {
        extroverte = 1,
        silence = 2
    };
    enum ModeState
    {
        order = 1,
        random = 2,
        cycle = 3
    };
    PlayAudioControl(QObject *parent = nullptr);
    int volume();
    //test
    void playFile(QString fileName);

signals:
    void pauseChange(int state);
    void modeChange(int state);
    void soundChange(int state);
    void playStop();
    void progressUpdata(qint64 progress);
    void volumeChange(int value);

private slots:
    void modeChanged(int state);
    void soundChanged();
    void pauseChanged();
    void stoped();
    void volumeChanged(int volume);

private:
    QMediaPlayer *mPlayer;
    SoundState mSound;
    ModeState mMode;
    AudioState mState;

    int mProgress;
    int mVolume;

    void mediaChange();
};
#endif // PLAYAUDIOCONTROL_H
