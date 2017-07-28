#include "audioplayercontrol.h"
#include "audiodefine.h"
#include <QFile>
#include <QDebug>

AudioPayerManager::AudioPayerManager(QObject *parent)
    : QObject(parent)
    , mMediaPlayer(new QMediaPlayer)
    , mMediaPlayerList(nullptr)
    , mFile(nullptr)
    , mSoundEnable(true)
    , mCurVolume(Default_Volume)
{
    mStatue = Statue::stop;
    mModel = Model::cycle;
    connect(mMediaPlayer, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
}

void AudioPayerManager::playAudio(QString fileName)
{
    if(!mMediaPlayer) return;
    if(!mFile)
    mFile = new QFile(fileName);
    if(!mFile->exists())
    {
        emit errorMsg(tr("audio file:%1 is not exist").arg(mFile->fileName()));
        return;
    }
    mStatue = Statue::play;
    mModel = Model::cycle;
    mMediaPlayer->setMedia(QUrl::fromLocalFile(fileName));
    mMediaPlayer->setVolume(mCurVolume);
    mMediaPlayer->play();
}

void AudioPayerManager::enableVolume(bool enable)
{
    mSoundEnable = enable;
    if(!mSoundEnable)
        mMediaPlayer->setVolume(0);
    else
        mMediaPlayer->setVolume(mCurVolume);
}

void AudioPayerManager::positionChanged(qint64 pos)
{
    emit playProgressChanged(pos);
}

void AudioPayerManager::playSliderChanged(quint64 percent)
{
    if(!mFile || !mMediaPlayer) return;
    mMediaPlayer->setPosition(percent);
}

void AudioPayerManager::palyStatueChanged(AudioPayerManager::Statue statue)
{
    switch (statue) {
    case play:
        mMediaPlayer->play();
        break;
    case pause:
        mMediaPlayer->pause();
        break;
    case stop:
        mMediaPlayer->stop();
        break;
    default:
        break;
    }
}

void AudioPayerManager::playOrPause()
{
    if(mStatue == play)
        mStatue = pause;
    else
        mStatue = play;
    palyStatueChanged(mStatue);

}

void AudioPayerManager::playStop()
{
    if(mStatue == stop) return;
    mStatue = stop;
    palyStatueChanged(mStatue);
}

void AudioPayerManager::volumeChanged(int percent)
{
    if(percent <= 0 || percent >= 100) return;
    if(!mMediaPlayer || !mSoundEnable) return;
    mCurVolume = percent;
    mMediaPlayer->setVolume(mCurVolume);
}
