// demo of function overloading

#include <iostream>

using namespace std;

class overload
{
public:
    void sum(int a, int b);
    void sum(int a, int b, int c);
};

void overload::sum(int a, int b, int c)
{
    cout << "sum is " << a + b + c << endl;
}

void overload::sum(int a, int b)
{
    cout << "sum is " << a + b << endl;
}

int main()
{

    overload a1;

    a1.sum(1, 2);
    a1.sum(1, 2, 3);

    return 0;
}
