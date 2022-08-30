
#include <iostream>

using namespace std;

class student
{
    char name[20];
    int roll;
    int mark[2];
    static int total;
    int result;

public:
    student();
    void get();
};

int student::total;

student::student()
{
    cout << "enter student name" << endl;
    cin >> name;
    cout << "enter student roll" << endl;
    cin >> roll;
    cout << "enter mark of 3 subject" << endl;
    for (int i = 0; i <= 2; i++)
    {
        cin >> mark[i];

        total += mark[i];
    }

    // for (int i = 0; i <= 2; i++)
    // {
    //     if (mark[i] > 28)
    //     {
    //         result =1;
    //     }
    //     else
    //     {
    //         result =0;
    //         break;
    //     }
    // }
}

void student::get()
{
    cout << endl;
    cout << name << endl;
    cout << roll << endl;
    for (int i = 0; i <= 2; i++)
    {
        cout << mark[i] << endl;
    }
    cout << total << endl;
    cout << result << endl;
}

int main()
{
    student a[1];

    return 0;
}