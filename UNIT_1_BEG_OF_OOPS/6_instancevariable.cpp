#include<iostream>
using namespace std;
class Student
{
    public:
    int id;
    char name[100];
    int courseid;
    void setdeatils()
    {
        cout<<"enter details "<<endl;
        cin>>id>>name>>courseid;
    }
    void getdeatils()
    {
        cout<<id<<" "<<name<<" "<<courseid<<endl;
    }
};
int main()
{
    Student s1;
    s1.setdeatils();
    s1.getdeatils();
}