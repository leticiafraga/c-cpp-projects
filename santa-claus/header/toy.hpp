#ifndef TOY
#define TOY

#include <iostream>
#include <string>
#include "object.hpp"

using namespace std;

class Toy : public Object
{
public:
    Toy(string title);
    virtual void isTaken();
};

#endif