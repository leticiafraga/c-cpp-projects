#include "toy.hpp"

#ifndef LITTLE_PONY
#define LITTLE_PONY

class LittlePony : public Toy
{

public:
    LittlePony(std::string title);
    void isTaken();
    std::string getTitle();
};

#endif