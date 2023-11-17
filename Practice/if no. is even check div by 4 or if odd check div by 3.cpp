#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the value of a ";
    cin >> a;
    if (a % 2 == 0)
    {
        if (a % 4 == 0)
        {
            cout << "number is even and divisible by 4";
        }
        else
        {
            cout << "number is even but not divisible by 4";
        }
    }
    else
    {
        if (a % 3 == 0)
        {
            cout << "number is odd and divisible by 3";
        }
        else
        {
            cout << "number is odd but not divisible by 3";
        }
    }
}
