#include "object.hpp"
#include "wrap.hpp"

class IConveyorBelt
{
public:
    virtual void put(Object *o) = 0;
    virtual Object *take() = 0;
    virtual Wrap *pressIn() = 0;
    virtual Object pressOut() = 0;
    virtual std::string getWhat() = 0;
};