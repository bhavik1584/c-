#include <iostream>

using namespace std;

class a
{
    int h = 20;

public:
    friend class b;
};

class b
{
public:
    void show(a);
};

void b::show(a a1)
{
    cout << a1.h;
}

int main()
{
    a a1;
    b a2;

    a2.show(a1);

    return 0;
}