#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void print()
    {
        cout << "this is class A" << endl;
    }
};
class B : public A
{
public:
    void print()
    {
        cout << "this is class B" << endl;
    }
};
class C : public B
{
public:
    void print()
    {
        cout << "this is class C" << endl;
    }
};
int main()
{
    C c;
    c.print();
    c.B::print();
    c.A::print();
}
