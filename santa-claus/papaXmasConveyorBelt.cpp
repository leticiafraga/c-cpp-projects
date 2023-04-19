#include "header/papaXmasConveyorBelt.hpp"

PapaXmasConveyorBelt::PapaXmasConveyorBelt()
{
    content = nullptr;
}

void PapaXmasConveyorBelt::put(Object *o)
{
    if (this->content)
        content = o;
    else
        std::cerr << "I already have something" << std::endl;
}

Object *PapaXmasConveyorBelt::take()
{
    if (this->content)
        std::cerr << "There is no content" << std::endl;
    Object *aux = content;
    content = nullptr;
    return aux;
}

Wrap *PapaXmasConveyorBelt::pressIn()
{
    return new Wrap();
}

Object PapaXmasConveyorBelt::pressOut()
{
}

std::string PapaXmasConveyorBelt::getWhat()
{
    return "";
}