//license-placeholder 2017-8-11 Liu hai long
#include "audiofilemanager.h"

AudioFileManager *AudioFileManager::_audiofilemanager = nullptr;

AudioFileManager *AudioFileManager::instance()
{
    if(!_audiofilemanager)
    {
        _audiofilemanager = new AudioFileManager();
    }
    return _audiofilemanager;
}

void AudioFileManager::deteleInstance()
{
    if(_audiofilemanager) delete _audiofilemanager;
    _audiofilemanager = nullptr;
}

bool AudioFileManager::loadFile(QString &err)
{
    return true;
}

void AudioFileManager::findByDirection(int direction)
{

}
