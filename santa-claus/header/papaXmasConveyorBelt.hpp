#include "iConveyorBelt.hpp"

class PapaXmasConveyorBelt : public IConveyorBelt
{
private:
    Object *content;

public:
    PapaXmasConveyorBelt();
    void put(Object *o);
    Object *take();
    Wrap *pressIn();
    void *pressOut();
    Object *getContent();
};