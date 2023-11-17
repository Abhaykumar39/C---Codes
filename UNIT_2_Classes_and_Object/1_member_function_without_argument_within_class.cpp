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
        cout<<"enter the student details : ";
        cin>>id>>name;
    }
    void display()
    {
    cout<<id<<name;
    }
};
int main()
{
    student s;
    s.setdata();
    s.display();
}