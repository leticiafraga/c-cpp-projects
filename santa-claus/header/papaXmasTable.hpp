#include "object.hpp"
#include "iTable.hpp"

using namespace std;

class PapaXmasTable : public ITable
{
private:
    vector<Object> items;
    static const int size = 10;

public:
    void put(Object o);
    void take(Object o);
    vector<Object> look();
};