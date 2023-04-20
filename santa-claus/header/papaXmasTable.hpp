#ifndef PAPA_XMAS_TABLE
#define PAPA_XMAS_TABLE

#include "object.hpp"
#include "iTable.hpp"

class PapaXmasTable : public ITable
{
private:
    Object **items;
    static const int size = 10;
    bool collapsed;

public:
    PapaXmasTable();
    void put(Object *o);
    Object *take(std::string *title);
    std::string *look();
};

#endif