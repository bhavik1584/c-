#include <iostream>

using namespace std;

class hello
{

    //by default functions are inline if you are declare inside the class

    void func1()
    {
        cout<<"hello im func 1 and i am inline function";

    }
    void func2();

};

inline hello::func2()
{
    cout<<"hello im func 2 and i am inline function";
}

int main()
{
    return 0;
}