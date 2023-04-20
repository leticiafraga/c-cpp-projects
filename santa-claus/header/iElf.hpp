#include "object.hpp"
#include "wrap.hpp"
#include "toy.hpp"
#include "iTable.hpp"
#include "iConveyorBelt.hpp"

class IElf
{
public:
    virtual void wrapGift(Toy *gift) = 0;
    virtual void putTable(Object *o) = 0;
    virtual Object *takeTable(std::string *title) = 0;
    virtual std::string *lookTable() = 0;
    virtual void putConveyorBelt(Object *o) = 0;
    virtual Object *takeConveyorBelt() = 0;
    virtual Wrap *pressIn() = 0;
    virtual void pressOut() = 0;
};