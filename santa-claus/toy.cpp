#include "header/toy.h"
#include "header/object.h"

void Toy::isTaken()
{
    cout << "toy" << endl;
}

Toy::Toy(string title) : Object(title)
{
}