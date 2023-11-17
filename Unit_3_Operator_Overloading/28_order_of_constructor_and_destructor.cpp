#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
    cout<<" A class costructor ";
    }
    ~A()
    {
        cout<<" A class destructor ";
    }
};
class B: public A
{
    public:
    B()
    {
        cout<<" B class costructor ";
    }
    ~B()
    {
        cout<<" B class destructor ";
    }
};
int main()
{
    B s;
}