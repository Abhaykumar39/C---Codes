#include<iostream>
using namespace std;
class Demo
{
    int a,b;
    public:
    void input()
    {
        cout<<"enter the value of a and b : "<<endl;
        cin>>a>>b;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
    friend Demo operator+(Demo &d1, Demo &d2);
};
Demo operator+(Demo &d1,Demo &d2)
    {
        Demo d3;
        d3.a=d1.a+d2.a;
        d3.b=d1.b+d2.b;
        return d3;
    }

int main()
{
    Demo d1,d2,d3;
    d1.input();
    d2.input();
    d3=d1+d2;
    d3.show();
}