#include "header/object.hpp"
#include "header/teddy.hpp"
#include "header/littlePony.hpp"
#include "header/box.hpp"
#include "header/giftPaper.hpp"
#include <iostream>
#include <typeinfo>
using namespace std;

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
            {
                cout << "Was expecting a Box as second element" << endl;
            }
        }
        else
        {
            cout << "Was expecting a Box as second element" << endl;
        }
    }
    else
    {
        cout << "Was expecting a Teddy as first element" << endl;
    }
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
        {
            cout << "Was expecting a Box as second element" << endl;
        }
    }
    else
    {
        cout << "Was expecting a Teddy as first element" << endl;
    }
    return nullptr;
}