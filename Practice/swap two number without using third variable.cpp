#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the value of a and b";
    cin >> a >> b;
    cout << "before swapping: " << a << " " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "after swapping: " << a << " " << b << endl;
    return 0;
}