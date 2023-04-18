#include <iostream>
#include <string>
#include "header/object.hpp"
#include "header/wrap.hpp"
#include "header/littlePony.hpp"

using namespace std;

Object **MyUnitTests();

int main()
{
    // part 1
    Object **toys = MyUnitTests();

    toys[0]->print(cout);
    toys[1]->print(cout);

    string str = "Rainbow Dash";
    Wrap *wrap = new Wrap();
    LittlePony *pony = new LittlePony(str);
    pony->isTaken();
    wrap->wrapMeThat(pony);

    return 0;
}
