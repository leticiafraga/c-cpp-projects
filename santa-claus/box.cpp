#include "header/box.hpp"

Box::Box() : Wrap()
{
    open = false;
}

void Box::wrapMeThat(Object *that)
{
    if (!this->open)
    {
        cout << "I am closed" << endl;
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