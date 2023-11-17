#include<iostream>
using namespace std;
class Demo
{
    int a;
    public:
    void getdata(int x)
    {
        a=x;
    }
    void display()
    { 
        cout<<a;
    }
    Demo(int x)
    {
        a=x;
    }
};
int main()
{
    int n=10;
    Demo d(n);
       d.getdata(8);
       d.display();  
    d=n;
    d.display();
}