#ifndef GIFT_PAPER
#define GIFT_PAPER

#include "wrap.hpp"

using namespace std;

class GiftPaper : public Wrap
{
public:
    GiftPaper();
    void wrapMeThat(Object *that);
};

#endif