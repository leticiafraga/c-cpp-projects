#include "header/wrap.hpp"

Wrap::Wrap() : Object()
{
    std::cout << "whistles while working" << std::endl;
}

void Wrap::wrapMeThat(Object *that)
{
    if (this->content)
    {
        std::cerr << "I already have an object" << std::endl;
    }
    else
    {
        std::cerr << "tuuuut tuuut tuut" << std::endl;
        this->content = that;
    }
}

void Wrap::openMe()
{
}