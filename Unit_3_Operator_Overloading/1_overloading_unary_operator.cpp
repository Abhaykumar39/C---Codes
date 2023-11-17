#include<iostream>
using namespace std;
class Demo
{
    int a,b;
    public:
    void setdata()
    {
        cout<<"enter the value of a ";
        cin>>a;
        cout<<"enter the vale of b "<<endl;
        cin>>b;
    }
    void displaydata()
    {
        cout<<a<<endl;
        cout<<b;
    }
    Demo operator-()
    {
        a=-a;
        b=-b;
    }
};
int main()
{
    Demo d;
    d.setdata();
    d.displaydata();
    -d;
    d.displaydata();
}   