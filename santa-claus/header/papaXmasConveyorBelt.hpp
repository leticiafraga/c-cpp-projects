#include "iConveyorBelt.hpp"

class PapaXmasConveyorBelt : IConveyorBelt
{
private:
    Object what;
    int size;

public:
    void put(Object o);
    void take(Object o);
    void pressIn();
    Object pressOut();
    string getWhat();
};