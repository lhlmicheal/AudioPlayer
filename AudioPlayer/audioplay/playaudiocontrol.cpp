//license-placeholder 2017-8-11 Liu Hai Long
#include "playaudiocontrol.h"
#include <QMediaPlayer.h>

PlayAudioControl::PlayAudioControl(QObject *parent)
    : QObject(parent)
    , mPlayer(new QMediaPlayer(this))
    , mSound(SoundState::extroverte)
    , mMode(ModeState::cycle)
    , mState(AudioState::play)
    , mProgress(0)
    , mVolume(SOUND_DEFAULT)
{
    Q_ASSERT(mPlayer);
    connect(mPlayer, SIGNAL(positionChanged(qint64)), this, SIGNAL(progressUpdata(qint64)));
}

int PlayAudioControl::volume()
{
    return mVolume;
}

void PlayAudioControl::playFile(QString fileName)
{
    mPlayer->setMedia(QUrl::fromLocalFile(fileName));
    mPlayer->setVolume(SOUND_DEFAULT);
    mPlayer->play();
}

void PlayAudioControl::modeChanged(int state)
{
    ModeState value = (ModeState)state;
    if(value == mMode) return;
    mMode = value;
    emit modeChange(value);
}

void PlayAudioControl::soundChanged()
{
    if(mSound == silence)
    {
        mSound = extroverte;
        mPlayer->setVolume(mVolume);
    }
    else
    {
        mSound = silence;
        mPlayer->setVolume(0);
    }
    emit soundChange(mSound);
}

void PlayAudioControl::pauseChanged()
{
    if(mState != play)
        mState = play;
    else
        mState = pause;
    mediaChange();
    emit pauseChange(mState);
}

void PlayAudioControl::stoped()
{
    if(mState == stop) return;
    mState = stop;
    mediaChange();
    emit pauseChange(mState);
}

void PlayAudioControl::volumeChanged(int volume)
{
    if(mVolume == volume) return;
    mVolume = volume;
    mPlayer->setVolume(volume);
    emit volumeChange(mVolume);
}

void PlayAudioControl::mediaChange()
{
    switch (mState) {
    case play:
        mPlayer->play();
        break;
    case pause:
        mPlayer->pause();
        break;
    case stop:
        mPlayer->stop();
        break;
    default:
        break;
    }
}
