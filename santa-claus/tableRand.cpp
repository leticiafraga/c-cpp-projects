#include "header/tableRand.hpp"
#include "header/teddy.hpp"
#include "header/littlePony.hpp"
#include "header/box.hpp"
#include "header/giftPaper.hpp"
#include <cstdlib>

TableRand::TableRand()
{
    this->collapsed = false;
    this->items = new Object *[10];
    int amount = rand() % 11;

    for (int i = 0; i < amount; i++)
    {
        int j = rand() % 4;
        switch (i)
        {
        case (0):
            this->put(new Teddy("Teddy"));
        case (1):
            this->put(new LittlePony("Pony"));
        case (2):
            this->put(new Box("Box"));
        default:
            this->put(new GiftPaper("Gift paper"));
        }
    }
}

void TableRand::put(Object *o)
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

Object *TableRand::take(std::string *title)
{
    for (int i = 0; i < 11; i++)
        if (items[i]->getTitle().compare(*title))
            return items[i];
    return nullptr;
}

std::string *TableRand::look()
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
