#include "header/papaXmasTable.hpp"
#include <algorithm>

PapaXmasTable::PapaXmasTable()
{
    this->collapsed = false;
    this->items = new Object *[10];
}

void PapaXmasTable::put(Object *o)
{
    if (collapsed == true)
        std::cerr << "Table collapsed" << std::endl;
    else
    {
        bool added = false;
        for (int i = 0; i < 10; ++i)
            if (this->items[i] == nullptr)
            {
                this->items[i] = o;
                added = true;
                break;
            }
        if (!added)
        {
            std::cerr << "Table collapsed" << std::endl;
            this->collapsed = true;
        }
    }
}

Object *PapaXmasTable::take(std::string *title)
{
    for (int i = 0; i < 11; i++)
        if (items[i]->getTitle().compare(*title))
            return items[i];
    return nullptr;
}

std::string *PapaXmasTable::look()
{
    if (collapsed)
    {
        std::cerr << "Table collapsed" << std::endl;
        return nullptr;
    }
    else
    {
        std::string *titles = new std::string[11];
        int last = -1;

        for (int i = 0; i < 11; i++)
        {
            if ((this->items[i] != nullptr))
            {
                titles[i] = items[i]->getTitle();
                last = i;
            }
            else
            {
                // setting last element to empty string because strings cannnot be null
                titles[i] = "";
                break;
            }
        }

        return titles;
    }
}
