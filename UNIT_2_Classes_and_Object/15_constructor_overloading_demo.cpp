#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    demo()
    {
        a=5;
        b=10;
    }
    demo(int z)
    {
        b=z;
    }
    demo (int x,int y)
    {
        a=x;
        b=y;
    }
    void add()
    {
        cout<<a+b<<endl;
    }
};
int main()
{
    demo d1,d2(10),d3(10,20);
    d1.add();
    d2.add();
    d3.add();
}