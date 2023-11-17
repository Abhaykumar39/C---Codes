#include <iostream>
using namespace std;
void number(int a);
int main()
{
    int n;
    cout << "enter a two digit number" << endl;
    cin >> n;
    if (n >= 100 || n < 10)
    {
        cout << "not a two digit number" << endl;
    }
    else
    {
        number(n);
    }
}
void number(int n)
{
    int a,b, sum = 0, product,temp;
    b = n % 10;
    a = n / 10;
    sum = a + b;
    product = a * b;
    temp= sum+product;
    if (temp == n)
    {
        cout << "special number" << endl;
    }
    else
    {
        cout << "not a special number" << endl;
    }
}