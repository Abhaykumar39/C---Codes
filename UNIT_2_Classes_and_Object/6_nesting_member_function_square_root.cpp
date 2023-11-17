#include<iostream>
using namespace std;
class calculate
{
     int a;
    public:
    void display();
    void square();
    void cube();
    void getdata();
    void setdata();
};
void calculate::square()
{
    cout<<a*a;
}
void calculate::cube()
{
    cout<<a*a*a;
}
void calculate::display()
{
    square();
    cube();
}
void calculate::setdata()
{
    cout<<"enter the value of a: ";
    cin>>a;
}
void calculate::getdata()
{
    display();
}
int main()
{
    calculate a1;
    a1.setdata();
    a1.getdata();
}
