#include<iostream>
#include<string.h>
using namespace std;
class organisation
{
    string  name;
    string department;
    public:
    organisation()
    {
        cout<<" enter the department details : "<<endl;
        cin>>name>>department;
    }
    void display()
    {
        cout<<name<<department<<endl;
    }
};
class employee:public organisation
{
    int id;
    string name;
    public:
    employee()
    {
        cout<<" enter the employee id and name : "<<endl;
        cin>>id>>name;
    }
    void display()
    {
        cout<<name<<" "<<id<<endl;
    }
};
int main()
{
    employee e1;
    e1.display();

    e1.organisation::display();
    
}