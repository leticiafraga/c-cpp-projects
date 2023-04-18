#include "header/toy.hpp"
#include "header/object.hpp"

void Toy::isTaken()
{
    cout << "toy" << endl;
}

Toy::Toy(string _title) : Object()
{
    this->title = _title;
}

void Toy::print(ostream &output)
{
    output << title << endl;
}