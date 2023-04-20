#include "header/papaXmasConveyorBelt.hpp"
#include "header/box.hpp"
#include "header/giftPaper.hpp"

#ifndef PAPA_XMAS_CONVEYOR_BELT
#define PAPA_XMAS_CONVEYOR_BELT

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
    if (!this->content)
        std::cerr << "There is no content" << std::endl;
    Object *aux = content;
    content = nullptr;
    return aux;
}

Wrap *PapaXmasConveyorBelt::pressIn()
{
    if (this->content)
        std::cerr << "There is already content" << std::endl;
    else
    {
        int wrapType = rand() % 2;
        if (wrapType == 0)
            return new Box();
        else
            return new GiftPaper();
    }
}

void PapaXmasConveyorBelt::pressOut()
{
    if (!this->content)
        std::cerr << "There is no content" << std::endl;
    Object *aux = content;
    content = nullptr;
    std::cout << "Sending to Santa" << std::endl;
}

#endif