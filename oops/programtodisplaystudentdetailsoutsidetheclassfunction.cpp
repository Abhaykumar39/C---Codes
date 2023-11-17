#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
    string name;
    int id;
    void display();
};
void Student::display()
{
    cout<<"enter the name of the student";
    cin>>name;
    cout<<"enter the id"<<endl;
    cin>>id;
}
int main()
{
    Student s1;
    s1.display();
}
