#include "iConveyorBelt.hpp"

class PapaXmasConveyorBelt : IConveyorBelt
{
private:
    Object *content;

public:
    PapaXmasConveyorBelt();
    void put(Object *o);
    Object *take();
    Wrap *pressIn();
    Object pressOut();
    std::string getWhat();
};