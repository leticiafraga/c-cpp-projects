#include "header/wrap.h"

Wrap::Wrap()
{
    cout << "whistles while working" << endl;
}

void Wrap::wrapMeThat(Object *that)
{
    cout << "tuuuut tuuut tuut" << endl;
    this->content = that;
}