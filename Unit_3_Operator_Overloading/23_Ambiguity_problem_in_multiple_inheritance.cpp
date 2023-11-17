#include<iostream>
using namespace std;
class A
{
    public:
    void print()
    {
        cout<<" print() of A ";
    }
};
class B
{
    public:
    void print()
    {
        cout<<" print() of B ";
    }
};
class C:public A,public B
{
    public:
    void print()
    {
        A::print();
        cout<<" print() of C ";
        B::print();
    }
};
int main()
{
    C obj;
    obj.print();
}