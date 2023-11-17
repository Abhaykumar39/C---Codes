#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int c;
    cout<<"before swapping "<<"a="<<a<<" "<<"b="<<b<<endl;
    c = a;
    a = b;
    b = c;
    cout <<"After swapping"<<" "<<"a="<< a << " " << "b=" << b << " " << endl;
}
int main()
{
    int a, b;
    cout << "enter values of a and b" << endl;
    cin >> a >> b;
    swap(a, b);
    return 0;
}
