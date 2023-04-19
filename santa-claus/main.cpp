#include <iostream>
#include <string>
#include "header/object.hpp"
#include "header/wrap.hpp"
#include "header/littlePony.hpp"
#include "header/teddy.hpp"
#include "header/box.hpp"
#include "header/giftPaper.hpp"

using namespace std;

Object **MyUnitTests();

int main()
{
    // part 1
    cout << "First test" << endl;
    Object **toys = MyUnitTests();

    toys[0]->print(cout);
    toys[1]->print(cout);

    // part 2
    cout << "Second test" << endl;
    Object **toys2 = new Object *[3];

    Box *box = new Box();
    GiftPaper *giftPaper = new GiftPaper();
    toys2[0] = toys[1];
    toys2[1] = box;
    toys2[2] = giftPaper;

    Object *finalObj = MyUnitTests(toys2);
    cout << "Wrap twice with same wrap" << endl;
    Box *box2 = new Box();

    toys2[0] = toys[1];
    toys2[1] = box2;
    MyUnitTestsWrapTwice(toys2);

    return 0;
}
