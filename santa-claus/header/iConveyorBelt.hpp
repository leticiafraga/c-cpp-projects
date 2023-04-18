#include "object.hpp"

class IConveyorBelt
{
public:
    virtual void put(Object o) = 0;
    virtual void take(Object o) = 0;
    virtual void pressIn() = 0;
    virtual Object pressOut() = 0;
    virtual string getWhat() = 0;
};