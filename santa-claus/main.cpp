#include <iostream>
#include <string>
#include "header/object.hpp"
#include "header/wrap.hpp"
#include "header/littlePony.hpp"
#include "header/teddy.hpp"
#include "header/box.hpp"
#include "header/giftPaper.hpp"

Object **MyUnitTests();

int main()
{
    // part 1
    std::cout << "First test" << std::endl;
    Object **toys = MyUnitTests();

    toys[0]->print(std::cout);
    toys[1]->print(std::cout);

    // part 2
    std::cout << "Second test" << std::endl;
    Object **toys2 = new Object *[3];

    Box *box = new Box();
    GiftPaper *giftPaper = new GiftPaper();
    toys2[0] = toys[1];
    toys2[1] = box;
    toys2[2] = giftPaper;

    Object *finalObj = MyUnitTests(toys2);
    std::cout << "Wrap twice with same wrap" << std::endl;
    Box *box2 = new Box();

    toys2[0] = toys[1];
    toys2[1] = box2;
    MyUnitTestsWrapTwice(toys2);

    return 0;
}
