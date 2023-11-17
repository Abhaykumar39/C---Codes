#include<iostream>
using namespace std;
class student
{
    int id;
    char name[100];
    float marks;
    public:
    void setdata()
    {
        cout<<"\nenter the details of student"<<endl;
        cin>>id>>name>>marks;
    }
    void getdata()
    {
        cout<<id<<name<<marks;
    }
} ;
int main()
{
    student s[5];
    for(int i=0;i<=5;i++)
    {
        s[i].setdata();
        s[i].getdata();
    }
}