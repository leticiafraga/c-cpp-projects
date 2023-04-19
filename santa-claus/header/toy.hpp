#ifndef TOY
#define TOY

#include <iostream>
#include <string>
#include "object.hpp"

class Toy : public Object
{
public:
    Toy(std::string title);
    virtual void isTaken();
    void print(std::ostream &output);
};

#endif