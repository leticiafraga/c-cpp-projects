#include "header/papaXmasTable.hpp"
#include <algorithm>

void PapaXmasTable::put(Object *o)
{
    if (collapsed)
        std::cerr << "Table collapsed";
    else
    {
        this->items->push_back(o);
        if (this->items->size() > this->size)
        {
            std::cerr << "Table collapsed";
            this->collapsed = true;
        }
    }
}

void PapaXmasTable::take(std::string *title)
{

    if (collapsed)
        std::cerr << "Table collapsed";
    else
    {

        // auto it = find_if(this->items->begin(), this->items->end(), [title](const Object &obj)
        //                   { return obj.getTitle() == mystd::string; }) if (position != this->items->end()) this->items->erase(position);
        // this->items->push_back(o);
        if (this->items->size() > this->size)
        {
            std::cerr << "Table collapsed";
            this->collapsed = true;
        }
    }
}

std::vector<Object *> *PapaXmasTable::look()
{
    if (collapsed)
    {
        std::cerr << "Table collapsed";
        return nullptr;
    }
    else
        return this->items;
}
