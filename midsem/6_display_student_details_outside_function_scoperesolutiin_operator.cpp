#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
    string name;
    int id;
    void setdata();
    void print();
};
void student::setdata()
{
    cout<<"enter the student details"<<endl;
    cin>>name>>id;
}
void student::print()
{
    cout<<name<<id<<endl;
}
int main()
{
    student a1;
    a1.setdata();
    a1.print();
}