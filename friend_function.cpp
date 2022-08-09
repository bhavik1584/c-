#include <iostream>

using namespace std;

class y;

class x
{
    int a;

public:
    void setdeta(int a)
    {
        this->a = a;
    }

    friend void swap(x &, y &);
    friend void display(x, y);
};

class y
{
    int b;

public:
    void setdeta(int b)
    {
        this->b = b;
    }

    friend void swap(x &, y &);
    friend void display(x, y);
};

void swap(x &a1, y &a2)
{
    int temp;

    temp = a1.a;
    a1.a = a2.b;
    a2.b = temp;
}

void display(x a1, y a2)
{

    cout << "a = " << a1.a << endl;
    cout << "b = " << a2.b << endl;
}

int main()
{
    x a1;
    y a2;

    a1.setdeta(100);
    a2.setdeta(200);
    display(a1, a2);
    swap(a1, a2);
    display(a1, a2);

    return 0;
}