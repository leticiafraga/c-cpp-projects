#include "header/box.hpp"

Box::Box() : Wrap()
{
    open = false;
}

void Box::wrapMeThat(Object *that)
{
    if (!this->open)
    {
        std::cerr << "I am closed" << std::endl;
    }
    else
    {
        Wrap::wrapMeThat(that);
    }
}

void Box::openMe()
{
    this->open = true;
    Wrap::openMe();
}