//license-placeholder 2017-8-12 Liu Hai Long
#include "element.h"

Element::Element(Type type, Element *parent)
    : mId(++ Element::elementId)
    , mType(type)
    , mParent(parent)
{
}

Element *Element::parent()
{
    return mParent;
}

Element *Element::addChild(Element *ele)
{
    if(!ele || mType == Type::groupNode) return nullptr;
    if(mChildren.contains(ele)) return ele;
    mChildren.append(ele);
    return ele;
}

const QList<Element *> &Element::childs()
{
    return mChildren;
}
