#ifndef GIFT_PAPER
#define GIFT_PAPER

#include "wrap.hpp"

class GiftPaper : public Wrap
{
public:
    GiftPaper();
    GiftPaper(std::string title);
    void wrapMeThat(Object *that);
};

#endif