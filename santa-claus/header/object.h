#include <iostream>
#include <string>

using namespace std;

class Object
{
};

std::ostream &operator<<(std::ostream &, Object const &);
Object **MyUnitTests();