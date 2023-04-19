#ifndef OBJECT
#define OBJECT
#include <iostream>
#include <string>

using namespace std;

class Object
{
public:
    Object();
    virtual void print(ostream &output);
};

Object **MyUnitTests();
Object *MyUnitTests(Object **);
Object *MyUnitTestsWrapTwice(Object **objects);

#endif