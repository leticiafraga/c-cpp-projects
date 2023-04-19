#include "header/toy.hpp"
#include "header/object.hpp"

void Toy::isTaken()
{
    std::cout << "toy" << std::endl;
}

Toy::Toy(std::string _title) : Object(_title)
{
}

void Toy::print(std::ostream &output)
{
    output << title << std::endl;
}