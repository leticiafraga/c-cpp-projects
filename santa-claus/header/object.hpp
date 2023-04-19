#ifndef OBJECT
#define OBJECT
#include <iostream>
#include <string>

class Object
{
protected:
    std::string title;

public:
    Object();
    Object(std::string title);
    virtual void print(std::ostream &output);
};

Object **MyUnitTests();
Object *MyUnitTests(Object **);
Object *MyUnitTestsWrapTwice(Object **objects);

#endif