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
    this->table->take(title);
}
std::string *PapaXmasElf::lookTable()
{
    this->table->look();
}
void PapaXmasElf::putConveyorBelt(Object *o)
{
    this->conveyorBelt->put(o);
}
Object *PapaXmasElf::takeConveyorBelt()
{
    this->conveyorBelt->take();
}
Wrap *PapaXmasElf::pressIn()
{
    this->conveyorBelt->pressIn();
}
void *PapaXmasElf::pressOut()
{
    this->conveyorBelt->pressOut();
}
