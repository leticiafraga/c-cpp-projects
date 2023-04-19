#include "header/wrap.hpp"

Wrap::Wrap() : Object()
{
    cout << "whistles while working" << endl;
}

void Wrap::wrapMeThat(Object *that)
{
    if (this->content)
    {
        cerr << "I already have an object" << endl;
    }
    else
    {
        cerr << "tuuuut tuuut tuut" << endl;
        this->content = that;
    }
}

void Wrap::openMe()
{
}