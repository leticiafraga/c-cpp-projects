#include "header/papaXmasTable.hpp"

void PapaXmasTable::put(Object o)
{
    this->items.push_back(o);
}

void PapaXmasTable::take(Object o)
{
    this->items.push_back(o);
}

vector<Object> PapaXmasTable::look()
{
    return this->items;
}