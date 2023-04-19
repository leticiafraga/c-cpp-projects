#ifndef BOX
#define BOX

#include "wrap.hpp"

using namespace std;

class Box : public Wrap
{
public:
    Box();
    void wrapMeThat(Object *that);
    void openMe();
    void closeMe();
    bool open;
};

#endif