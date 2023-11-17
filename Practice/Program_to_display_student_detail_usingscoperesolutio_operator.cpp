#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
    string name;
    int id;
    display();
};
Student::display()
{
    cout<<"enter the students name"<<endl;
    cin>>name;
    cout<<"enter the student id"<<endl;
    cin>>id;
    cout<<name<<id<<endl;
}
int main()
{
    Student s1;
    s1.display();
}