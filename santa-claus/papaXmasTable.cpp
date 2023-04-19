#include "header/papaXmasTable.hpp"
#include <algorithm>

PapaXmasTable::PapaXmasTable()
{
    this->collapsed = false;
}

void PapaXmasTable::put(Object *o)
{
    if (collapsed == true)
        std::cerr << "Table collapsed";
    else
    {
        bool added = false;
        for (int i = 0; i < 11; ++i)
            if (this->items[i] == nullptr)
            {
                this->items[i] = o;
                added = true;
                break;
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
    for (int i = 0; i < 11; i++)
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
        std::string *titles = new std::string[11];
        int last = -1;

        for (int i = 0; i < 11; ++i)
        {
            if ((this->items[i] != nullptr))
            {
                titles[i] = items[i]->getTitle();
                std::cout << items[i]->getTitle() << std::endl;
                last = i;
            }
            else
            {
                break;
            }
        }
        if (last != -1)
        {
            titles[last + 1] = nullptr;
        }

        return titles;
    }
}
