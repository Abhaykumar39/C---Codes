#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    void input()
    {
        cout<<" enter the value of a "
        cin>>a;
    }
    void display()
    {
        cout<<a;
    }
};
class B
{
    int b;
    public:
    void display()
    {
        cout<<b;
    }
};
int getvalue()
{
    return a;
}
 B(A a1)
 {
    b=a1.a;
    b=a1.getvalue();
 }
 int main()
 {
    A a1;
    a1.input();
    a1.display();
    B b1;
    b1=a1;
    b1.display();
 }
 