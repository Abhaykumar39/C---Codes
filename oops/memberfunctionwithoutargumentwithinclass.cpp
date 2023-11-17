#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    char name[100];
    void display()
    {
        cout<<"enter the details of students"<<endl;
        cin>>id>>name;
        cout<<id<<name<<endl;
    }
};
int main()
{
    student s1;
    s1.display();
} 