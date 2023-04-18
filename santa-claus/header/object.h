#ifndef OBJECT
#define OBJECT
#include <iostream>

#include <string>

using namespace std;

class Object
{
private:
    string title;

public:
    Object();
    Object(string title);
    string getTitle();
};

Object **MyUnitTests();
Object *MyUnitTests(Object **);

#endif