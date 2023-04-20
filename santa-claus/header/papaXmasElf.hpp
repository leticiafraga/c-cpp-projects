#include "iElf.hpp"
#include "papaXmasTable.hpp"
#include "papaXmasTable.hpp"

class PapaXmasElf : public IElf
{
private:
    ITable *table;
    IConveyorBelt *conveyorBelt;

public:
    PapaXmasElf();
    void wrapGift(Toy *gift);
    void putTable(Object *o);
    Object *takeTable(std::string *title);
    std::string *lookTable();
    void putConveyorBelt(Object *o);
    Object *takeConveyorBelt();
    Wrap *pressIn();
    void pressOut();
};