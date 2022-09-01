
#include <iostream>

using namespace std;

class a
{
    int num;

public:
    a();
    a(int num);
    void operator++();
    void operator++(int);
    void get();
};

a::a()
{
    num = 0;
}

a::a(int num)
{
    this->num = num;
}

void a::operator++()
{

    ++num;
}

void a::operator++(int a)
{

    num++;
}

void a::get()
{
    cout << num << endl;
}

int main()
{
    a a1(10), a2(20), a3;

    ++a1;
    a1++;

    a1.get();
    a2.get();
    a3.get();

    return 0;
}