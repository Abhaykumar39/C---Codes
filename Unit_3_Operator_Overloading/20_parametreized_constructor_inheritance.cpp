#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    A()
    {
        cout<<"default constructor of A class ";

    }
    A(int a)
    {
        cout<<"parametreized constructor of A class "<<x;
    }
};
class B: public A
{
    int y;
    public:
    B()
    {
        cout<<"default constructor of B class ";
    }
    B(int b)
    {
        cout<<"parametreized constructor of B class "<<y;
    }
};
int main()
{
    B obj(10);
}