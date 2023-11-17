#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    A()
    {
        cout<<" default constructor of A class ";
    }
};
class B :public A
{
    int y;
    public:
    B()
    {
      cout<<" default constructor of B class ";  
    }
};
int main()
{
    B obj;
}