#include "header/object.hpp"

string Object::getTitle()
{
    return this->title;
}

Object::Object(string _title)
{
    this->title = _title;
}