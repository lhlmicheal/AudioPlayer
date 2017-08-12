//license-placeholder 2017-8-11 Liu Hai Long
#ifndef FILEDOCUMENT_H
#define FILEDOCUMENT_H
#include <QObject>
#include <QMap>
class Element;
class FileDocument : QObject
{
    Q_OBJECT
public:
    explicit FileDocument(QObject *parent = nullptr);

signals:
    void elementAdded(Element *);
    void elementRemoved(int elementId);
    void groupAdded(Element *);
    void groupRemoved(int groupId);
    void selectedChange(Element *);

private slots:
    void selectedChanged(int itemId);
    void elementAdd();
    void elementRemove(int elementId);
    void groupAdd();
    void groupRemove(int elementId);

private:
    Element *mCurElement;
    QMap<int, QList<Element *>> mGroupElements;//int (group id),

    int currentGroupId();
};

#endif // FILEDOCUMENT_H
