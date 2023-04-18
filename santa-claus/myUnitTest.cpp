#include "header/object.hpp"
#include "header/teddy.hpp"
#include "header/littlePony.hpp"
#include <iostream>
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
    Object *teddy = objects[0];
    return teddy;
}