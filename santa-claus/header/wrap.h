#ifndef WRAP
#define WRAP

#include "object.h"

using namespace std;

class Wrap
{
public:
    Wrap();
    void wrapMeThat(Object *that);
    void openMe();

protected:
    Object *content = nullptr;
};

#endif