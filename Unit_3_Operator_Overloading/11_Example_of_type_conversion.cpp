#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    void input(int a)
    {
       x=a;
    }
    void display()
    {
        cout<<x;
    }
    A(int a)
    {
        x=a;
    }
};
int main()
{
    int n=5;
    A a1(n);
    a1.input(8);
    a1.display();
    a1=n;
    a1.display();
}