#include <iostream>
#include <string>
#include "header/wrap.hpp"
#include "header/littlePony.hpp"

using namespace std;

int main()
{
    string str = "Rainbow Dash";
    Wrap *wrap = new Wrap();
    LittlePony *pony = new LittlePony(str);
    cout << pony->getTitle() << endl;
    pony->isTaken();
    wrap->wrapMeThat(pony);
    return 0;
}
