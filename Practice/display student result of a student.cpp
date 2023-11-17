#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the marks";
    cin >> a;
    if (a >= 80 && a <= 100)
    {
        cout << "the grade is honour";
    }
    else if (a >= 60 && a <= 79)
    {
        cout << "the grade is first division";
    }
    else if (a >= 50 && a <= 59)
    {
        cout << "the grade is second division";
    }
    else if (a >= 40 && a <= 49)
    {
        cout << "the grade is third division";
    }
    else if (a >= 0 && a <= 39)
    {
        cout << "the grade is Fail";
    }
    else if (a <= 0 && a >= 100)
    {
        cout << "invalid marks";
    }
}