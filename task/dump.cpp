
#include <iostream>

using namespace std;

class student
{
    char name[20];
    int roll;
    int mark[3];
    int total = 0;
    int result;

public:
    student();
    void get();
    void maritlis(student[]);
};

student::student()
{

    cout << "enter student name" << endl;
    cin >> name;
    cout << "enter student roll" << endl;
    cin >> roll;
    cout << "enter mark of 3 subject" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> mark[i];

        total += mark[i];
    }

    for (int i = 0; i < 3; i++)
    {
        if (mark[i] > 28)
        {
            result = 1;
        }
        else
        {
            result = 0;
            break;
        }
    }
}

void student::get()
{
    cout << endl;
    cout << name << endl;
    cout << roll << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << mark[i] << endl;
    }
    cout << total << endl;
    cout << result << endl;
}

void student::maritlis(student a[])
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (a[i].result == 1 && (a[i].total >= a[j].total))
            {
                a[i].get();
            }
        }
    }
}

int main()
{
    student a[4];

    a[0].maritlis(a);

    return 0;
}