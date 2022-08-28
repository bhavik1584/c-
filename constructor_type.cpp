
#include <iostream>

using namespace std;

class a
{

public:
    string name;
    string surname;

    a();                                       // this is default constructor
    a(string name);                            // this is perameterized constructor
    a(string name, string surname, int myage); // constructor overloading with dynamic constructor
    a(a &a1);                                  // this is copy constructor

    void get();
};

a::a()
{
    cout << "i am default constructor" << endl;
}

a::a(string name)
{
    this->name = name;

    // cout<<"my name is "<<name;
}

a::a(string name, string surname, int myage)
{
    this->name = name;
    this->surname = surname;

    int *ptr = new int;

    *ptr = myage;

    cout << "my name is " << name << " " << surname << " "
         << "and my age is " << *ptr;
}

a::a(a &a1)
{

    this->name = a1.name;
}

void a::get()
{
    cout << name;
}

int main()
{
    a a1("bhavik");
    a a2(a1);
    a2.get();

    return 0;
}