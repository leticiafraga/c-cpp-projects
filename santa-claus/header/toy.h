#include <iostream>
#include <string>
#include "object.h"

using namespace std;

class Toy : public Object
{
public:
    virtual void isTaken() = 0;

private:
    string title;
};