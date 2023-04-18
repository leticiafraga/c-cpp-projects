#include "header/object.h"

string Object::getTitle()
{
    return this->title;
}

Object::Object(string _title)
{
    this->title = _title;
}