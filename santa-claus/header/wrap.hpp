#ifndef WRAP
#define WRAP

#include "object.hpp"

class Wrap : public Object
{
public:
    Wrap();
    Wrap(std::string title);
    void wrapMeThat(Object *that);
    void openMe();

protected:
    Object *content = nullptr;
};

#endif