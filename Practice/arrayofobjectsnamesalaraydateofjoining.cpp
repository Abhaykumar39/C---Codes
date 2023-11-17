#include<iostream>
using namespace std;
class employees
{
    string name;
    int salary;
    int date;
    public:
    void setdata()
    {
        cout<<"enter the details of the employee"<<endl;
        cin>>name>>salary>>date;
    }
    void getdata()
    {
        cout<<name<<" "<<salary<<" "<<date<<endl;
    }
};
int main()
{
    employees e[10];
    for(int i=0; i<10; i++)
    {
        e[i].setdata();
    }
    for (int i=0;i<10;i++)
    {
       e[i].getdata(); 
    }
}