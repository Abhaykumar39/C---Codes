#include <iostream>
using namespace std;
class A;
class B
{
    int b;

public:
    B()
    {
        b = 1;
    }
    friend void print(class A, class B);
};
class A
{
    int a;

public:
    A()
    {
        a = 2;
    }
    friend void print(class A, class B);
};
void print(A obj1, B obj2)
{
    cout << obj1.a << endl
         << obj2.b;
}
int main()
{
    A obja;
    B objb;
    print(obja, objb);
}