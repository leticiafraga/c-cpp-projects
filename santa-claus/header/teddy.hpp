#include "toy.hpp"

#ifndef TEDDY
#define TEDDY

class Teddy : public Toy
{
public:
    Teddy(std::string title);
    void isTaken();
    std::string getTitle();
};

#endif