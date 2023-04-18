#include "toy.hpp"

#ifndef LITTLE_PONY
#define LITTLE_PONY

class LittlePony : public Toy
{

public:
    LittlePony(string title);
    void isTaken();
};

#endif