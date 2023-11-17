#include <iostream>
using namespace std;
int main()
{
    int sub1, sub2, sub3, sub4, sub5, average;
    cout << "enter the marks of 5 subject";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;
    average = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;
    if (average > 60)
    {
        cout << "passed";
    }
    else
    {
        cout << "failed";
    }
}
