#include "header/giftPaper.hpp"

GiftPaper::GiftPaper() : Wrap()
{
}

GiftPaper::GiftPaper(std::string title) : Wrap(title)
{
}

void GiftPaper::wrapMeThat(Object *that)
{
    Wrap::wrapMeThat(that);
}
