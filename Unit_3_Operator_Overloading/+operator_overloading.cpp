#include<iostream>
using namespace std;
class Demo
{
    int a;
    public:
    void setdata()
    {
        cout<<"enter the value of a ";
        cin>>a;
    }
    void putdata()
    {
        cout<<a;
    }

    Demo operator+(Demo bb)
    {
        Demo cc;
        cc.a= a+ bb.a;
        return cc;
    }
};
int main()
{
 Demo aa,bb,cc;
 aa.setdata();
 bb.setdata();
 cc=aa+bb;
 cc.putdata();
} 