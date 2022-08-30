
#include <iostream>

using namespace std;

class student
{
    string name;
    int rollno;
    static int total;
    int mark[2];
    string result;

public:
    static int tobj;

    void get();
    friend void maritlist(student[], int tobj);

    student();
};

int student::total;
int student::tobj;

student::student()
{

    cout << "enter student name";
    cin >> name;
    cout << "enter student rollno";
    cin >> rollno;

    for (int i = 0; i <= 2; i++)
    {
        cout << "enter mark of  subject " << i << endl;
        cin >> mark[i];

        total += mark[i];

        //     if(mark[i]>28)
        //     {
        //         result="pass";

        //     }
        //   else
        //     {
        //         result="fail";
        //     }
    }

    for (int i = 0; i <= 2; i++)
    {
        if (mark[i] > 28)
        {
            result = "pass";
        }
        else
        {
            result = "fail";
            break;
        }
    }

    tobj++;
}

void student::get()
{

    cout << endl;
    cout << "studentname : " << name << endl;
    cout << "studentroll : " << rollno << endl;
    for (int i = 0; i <= 2; i++)
    {
        cout << "mark of subject " << i << "=" << mark[i] << endl;
    }
    cout << "total : " << total << endl;
    cout << "studentresult : " << result << endl;
}

void maritlist(student a[], int tobj)
{
    a[1].get();
}

int main()
{
    student a1[2];

    //   a1.get();

    maritlist(a1, student::tobj);

    return 0;
}