#include "object.hpp"
#include "iTable.hpp"

using namespace std;

class PapaXmasTable : public ITable
{
private:
    std::vector<Object *> *items;
    static const int size = 10;
    bool collapsed = false;

public:
    void
    put(Object *o);
    void take(std::string *title);
    std::vector<Object *> *look();
};