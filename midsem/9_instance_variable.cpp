#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    char name[100];
    void setdata()
    {
        cout<<"enter details"<<endl;
        cin>>id>>name;
    }
    void getdetails()
    {
        cout<<id<<" "<<name<<endl;
    }
};
int main()
{
    student s1;
    s1.setdata();
    s1.getdetails();
}