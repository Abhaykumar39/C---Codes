#include <iostream>
using namespace std;
void sum(int a = 1, int b = 5, int c = 10);
int main()
{
    sum(5, 6, 10);
    sum(5, 10);
    sum(5);
    sum();
}
void sum(int a, int b, int c)
{
    cout << a + b + c << endl;
}

int small(int num)
{
    int mn = 10;
    // 549
    while (num)
    {
        int digit = num % 10;
        mn = min(mn, digit);
        num /= 10;
    }
    return mn;
}
//  number which is divisible by a number other than 1 and itself
bool composite(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return true;
    }
    return false;
}