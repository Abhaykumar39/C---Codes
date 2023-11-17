#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int id;
    string name;
    public:
    void setdata()
    {
        cout<<"enter the student details ";
        cin>>id>>name;
    }
    void getdata()
    {
        cout<<id<<name<<endl;
    }
};
int main()
{
    student s1;
    s1.setdata();
    s1.getdata();
}