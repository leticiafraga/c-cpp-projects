#include <iostream>
#include <string>
#include <array>
#include "header/littlePony.hpp"
#include "header/teddy.hpp"
#include "header/box.hpp"
#include "header/giftPaper.hpp"
#include "header/helpers.hpp"

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

    // part 3 - table
    std::cout << "Table test" << std::endl;
    ITable *table = createTable();

    for (int i = 0; i < 11; i++)
    {
        table->put(new LittlePony("RainbowDash " + std::to_string(i)));
    }

    std::string *arr = table->look();
    if (arr != nullptr)
    {
        for (int i = 0; i < 11; i++)
        {
            std::cout << arr[i] << std::endl;
        }
    }

    // part 4 - elf

    return 0;
}
