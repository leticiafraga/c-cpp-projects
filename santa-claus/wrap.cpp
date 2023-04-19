#include "header/wrap.hpp"

Wrap::Wrap() : Object()
{
    cout << "whistles while working" << endl;
}

void Wrap::wrapMeThat(Object *that)
{
    if (this->content)
    {
        cout << "I already have an object" << endl;
    }
    else
    {
        cout << "tuuuut tuuut tuut" << endl;
        this->content = that;
    }
}

void Wrap::openMe()
{
}