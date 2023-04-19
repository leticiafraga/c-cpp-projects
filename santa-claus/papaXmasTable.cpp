#include "header/papaXmasTable.hpp"
#include <algorithm>

void PapaXmasTable::put(Object *o)
{
    if (collapsed)
        std::cerr << "Table collapsed";
    else
    {
        bool added = false;
        for (int i = 0; i < 11; ++i)
            if (!this->items[i])
            {
                this->items[i] = o;
                added = true;
            }
        if (!added)
        {
            std::cerr << "Table collapsed";
            this->collapsed = true;
        }
    }
}

Object *PapaXmasTable::take(std::string *title)
{
    for (int i = 0; i < this->amount; i++)
        if (items[i]->getTitle().compare(*title))
            return items[i];
    return nullptr;
}

std::string *PapaXmasTable::look()
{
    if (collapsed)
    {
        std::cerr << "Table collapsed";
        return nullptr;
    }
    else
    {
        std::string *titles = new std::string[amount];

        for (int i = 0; i < this->amount; i++)
            titles[amount] = items[amount]->getTitle();
        return titles;
    }
}
