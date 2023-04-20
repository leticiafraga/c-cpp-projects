#ifndef TABLE_RAND
#define TABLE_RAND

#include "object.hpp"
#include "iTable.hpp"

class TableRand : public ITable
{
private:
    Object **items;
    static const int size = 10;
    bool collapsed;

public:
    TableRand();
    void put(Object *o);
    Object *take(std::string *title);
    std::string *look();
};

#endif