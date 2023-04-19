#include "header/object.hpp"
#include <string>

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
