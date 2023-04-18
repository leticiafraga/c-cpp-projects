#include "header/wrap.hpp"

Wrap::Wrap()
{
    cout << "whistles while working" << endl;
}

void Wrap::wrapMeThat(Object *that)
{
    cout << "tuuuut tuuut tuut" << endl;
    this->content = that;
}