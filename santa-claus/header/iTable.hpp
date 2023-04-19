#include "object.hpp"

class ITable
{
    virtual void put(Object *o) = 0;
    virtual Object *take(std::string *title) = 0;
    virtual std::string *look() = 0;
};