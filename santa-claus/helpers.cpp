#include "header/helpers.hpp"
#include "header/papaXmasTable.hpp"
#include "header/papaXmasConveyorBelt.hpp"

ITable *createTable()
{
    return new PapaXmasTable();
}

IConveyorBelt *createConveyorBelt()
{
    return new PapaXmasConveyorBelt();
}