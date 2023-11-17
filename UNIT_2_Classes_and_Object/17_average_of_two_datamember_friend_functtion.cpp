#include<iostream>
using namespace std;
class average 
{
    int a,b;
    public:
    void setdata()
    {
        cout<<"enter the first number"<<endl;
        cin>>a;
        cout<<"enter the second number"<<endl;
        cin>>b;
    }
    friend void getdata(average d);
};
void getdata(average d)
{
    int c;
    c=(d.a+d.b)/2;
    cout<<c;
}
int main()
{
    average d;
    d.setdata();
    getdata(d);
}