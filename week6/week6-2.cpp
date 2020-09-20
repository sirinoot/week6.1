#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
using namespace std;

class f
{
    char name[100];
    int  age;
public:
    void input()
    {
        cout << "Name : ";
        cin >> name;
        cout << "Age : ";
        cin >> age;
    }
    void output()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    f s[3];
    int i;
    cout << "Enter friend's info" << endl;
    for (i = 0; i < 3; i++)
    {
        cout << "friend " << i + 1 << endl;
        s[i].input();
    }
    cout << endl << "Displaying friend's info" << endl;
    for (i = 0; i < 3; i++)
    {
        cout << "friend " << i + 1 << endl;
        s[i].output();
    }
    return 0;
}