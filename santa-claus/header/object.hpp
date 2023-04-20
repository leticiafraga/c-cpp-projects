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
    void print(std::ostream &output);
    std::string getTitle();
    virtual ~Object();
};

#endif