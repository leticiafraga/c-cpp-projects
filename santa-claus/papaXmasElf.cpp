#include "header/papaXmasElf.hpp"
#include "header/helpers.hpp"
#include "header/toy.hpp"

PapaXmasElf::PapaXmasElf()
{
    this->table = createTable();
}
void PapaXmasElf::wrapGift(Toy *gift)
{
    gift->isTaken();
    this->putTable(gift);
    Wrap *wrap = this->pressIn();
    std::string *title = new std::string;
    *title = gift->getTitle();
    this->takeTable(title);
    wrap->wrapMeThat(gift);
    this->pressOut();
}

void PapaXmasElf::putTable(Object *o)
{
    this->table->put(o);
}
Object *PapaXmasElf::takeTable(std::string *title)
{
    return this->table->take(title);
}
std::string *PapaXmasElf::lookTable()
{
    return this->table->look();
}
void PapaXmasElf::putConveyorBelt(Object *o)
{
    this->conveyorBelt->put(o);
}
Object *PapaXmasElf::takeConveyorBelt()
{
    return this->conveyorBelt->take();
}
Wrap *PapaXmasElf::pressIn()
{
    return this->conveyorBelt->pressIn();
}
void *PapaXmasElf::pressOut()
{
    this->conveyorBelt->pressOut();
}
