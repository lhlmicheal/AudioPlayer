//license-placeholder 2017-8-12 Liu Hai Long
#ifndef ELEMENT_H
#define ELEMENT_H
#include <QString>
#include <QList>

class Element
{
public:
    enum Type
    {
        groupNode = 0,
        element,
    };
    explicit Element(Type type = Type::element, Element *parent = nullptr);

    int id() { return mId; }
    Type type() { return mType; }
    QString name() { return mName; }

    void setName(QString name) { mName = name; }
    Element *parent();
    Element *addChild(Element *ele);
    const QList<Element *> &childs();


private:
    int mId;
    Type mType;
    QString mName;
    Element *mParent;
    QList<Element *> mChildren;

    static int elementId;
};
#endif // ELEMENT_H
