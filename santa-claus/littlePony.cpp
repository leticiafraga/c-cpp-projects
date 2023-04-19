#include "header/littlePony.hpp"
#include "header/toy.hpp"

void LittlePony::isTaken()
{
    std::cout << "yo man" << std::endl;
}

LittlePony::LittlePony(std::string title) : Toy(title)
{
}