#include "header/toy.hpp"
#include "header/object.hpp"

void Toy::isTaken()
{
    cout << "toy" << endl;
}

Toy::Toy(string title) : Object(title)
{
}