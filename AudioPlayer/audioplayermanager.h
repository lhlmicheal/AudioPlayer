#ifndef AUDIOPALYERMANAGER_H
#define AUDIOPALYERMANAGER_H

#include <QObject>
class AudioPayerManager: public QObject
{
    Q_OBJECT
public:
    explicit AudioPayerManager(QObject *parent = nullptr);

};
#endif // AUDIOPALYERMANAGER_H
