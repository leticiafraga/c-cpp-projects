#ifndef BOX
#define BOX

#include "wrap.hpp"

class Box : public Wrap
{
public:
    Box();
    Box(std::string title);
    void wrapMeThat(Object *that);
    void openMe();
    void closeMe();
    bool open;
};

#endif