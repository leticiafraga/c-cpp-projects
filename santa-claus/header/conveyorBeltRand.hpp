#include "iConveyorBelt.hpp"

class ConveyorBeltRand : public IConveyorBelt
{
private:
    Object *content;

public:
    ConveyorBeltRand();
    void put(Object *o);
    Object *take();
    Wrap *pressIn();
    void pressOut();
    Object *getContent();
};