#include <vector>
#include "object.hpp"

class ITable
{
    virtual void put(Object o) = 0;
    virtual void take(Object o) = 0;
    virtual vector<Object> look() = 0;
};