#include "header/object.hpp"

void Object::print(std::ostream &output)
{
    output << title << std::endl;
}

Object::Object()
{
}

Object::Object(std::string _title)
{
    this->title = _title;
}

std::string Object::getTitle()
{
    return this->title;
}

Object::~Object()
{
}