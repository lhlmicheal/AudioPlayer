//license-placeholder 2017-8-11 Liu Hai Long
#include "playaudiocontrol.h"
#include <QMediaPlayer.h>

PlayAudioControl::PlayAudioControl(QObject *parent)
    : QObject(parent)
    , mPlayer(new QMediaPlayer(this))
    , mSound(SoundState::silence)
    , mMode(ModeState::cycle)
    , mState(AudioState::unknown)
    , mProgress(0)
    , mVolume(SOUND_DEFAULT)
{
    Q_ASSERT(mPlayer);
}

int PlayAudioControl::volume()
{
    return mVolume;
}

void PlayAudioControl::playFile(QString fileName)
{
    connect(mPlayer, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    mPlayer->setMedia(QUrl::fromLocalFile(fileName));
    mPlayer->setVolume(50);
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
    if(mSound == silence) mSound = extroverte;
    else mSound = silence;
    emit soundChange(mSound);
}

void PlayAudioControl::pauseChanged()
{
    if(mState != play)
        mState = play;
    else
        mState = pause;
    emit pauseChange(mState);
}

void PlayAudioControl::stoped()
{
    if(mState == stop) return;
    mState = stop;
    emit playStop();
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
