#ifndef WRAP
#define WRAP

using namespace std;

using namespace std;

class Wrap : public Object
{
public:
    Wrap();
    void wrapMeThat(Object *that);
    void openMe();

protected:
    Object *content = nullptr;
};

#endif