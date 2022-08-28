// wap to concate 2 object in 1 and return

#include <iostream>


using namespace std;

class a
{

    string name;

public:
    a(string name);
    void get();

    a(a x, a y)
    {
        this->name = x.name + y.name;
    }
};

a::a(string name)
{
    this->name = name;
}

void a::get()
{
    cout << name;
}

int main()
{
    a a1("bhavik");
    a a2("sapariya");
    a a3(a1, a2);
    a3.get();

    return 0;
}