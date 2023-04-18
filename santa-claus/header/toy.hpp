#ifndef TOY
#define TOY

#include <iostream>
#include <string>
#include "object.hpp"

using namespace std;

class Toy : public Object
{
private:
    string title;
public:
    Toy(string title);
    virtual void isTaken();
    void print(ostream &output);
};

#endif