#include "header/object.hpp"
#include "header/teddy.hpp"
#include "header/littlePony.hpp"
#include "header/box.hpp"
#include "header/giftPaper.hpp"
#include <iostream>
#include <typeinfo>

Object **MyUnitTests()
{
    Object **toys = new Object *[2];

    LittlePony *pony = new LittlePony("happy pony");
    Teddy *teddy = new Teddy("cuddles");

    toys[0] = pony;
    toys[1] = teddy;

    return toys;
}

Object *MyUnitTests(Object **objects)
{
    if (Teddy *teddy = dynamic_cast<Teddy *>(objects[0]))
    {

        if (Box *box = dynamic_cast<Box *>(objects[1]))
        {
            if (GiftPaper *giftPaper = dynamic_cast<GiftPaper *>(objects[2]))
            {

                teddy->isTaken();

                if (!box->open)
                    box->openMe();
                box->wrapMeThat(teddy);
                giftPaper->wrapMeThat(box);

                return giftPaper;
            }
            else
                std::cerr << "Was expecting a Box as second element" << std::endl;
        }
        else
            std::cerr << "Was expecting a Box as second element" << std::endl;
    }
    else
        std::cerr << "Was expecting a Teddy as first element" << std::endl;

    return nullptr;
}

Object *MyUnitTestsWrapTwice(Object **objects)
{
    if (Teddy *teddy = dynamic_cast<Teddy *>(objects[0]))
    {

        if (Box *box = dynamic_cast<Box *>(objects[1]))
        {

            teddy->isTaken();

            if (!box->open)
                box->openMe();
            box->wrapMeThat(teddy);
            box->wrapMeThat(teddy);

            return box;
        }
        else
            std::cerr << "Was expecting a Box as second element" << std::endl;
    }
    else
        std::cerr << "Was expecting a Teddy as first element" << std::endl;
    return nullptr;
}