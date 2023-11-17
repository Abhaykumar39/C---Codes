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
class C : public A
{
public:
    void input()
    {
        cout << "this is class C" << endl;
    }
};
class D : public B, public C
{
public:
    void print()
    {
        cout << "this is class D" << endl;
    }
};
int main()
{
    D d;
    d.input();
    d.print();
}
