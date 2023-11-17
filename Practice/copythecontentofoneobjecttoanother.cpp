#include<iostream>
using namespace std;
class student
{
    int a,b;
    public:
    void setdata();
    void getdata();
    student copy(student,student);
};
void student::setdata()
{
    cout<<"enter the details of the student";
    cin>>a>>b;
}
void student::getdata()
{
    cout<<a<<" "<<b;
}
student student::copy(student d1,student d2)
{
    d2.a=d1.a;
    d2.b=d1.b;
}
int main()
{
    student d1,d2;
    d1.setdata();                          
    d1.getdata();
    d2=d2.copy(d1,d2);
    d2.getdata();
}