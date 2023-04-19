#ifndef PAPA_XMAS_TABLE
#define PAPA_XMAS_TABLE

#include "object.hpp"
#include "iTable.hpp"

class PapaXmasTable : public ITable
{
private:
    Object *items[10];
    static const int size;
    int amount = 0;
    bool collapsed = false;

public:
    void put(Object *o);
    Object *take(std::string *title);
    std::string *look();
};

#endif