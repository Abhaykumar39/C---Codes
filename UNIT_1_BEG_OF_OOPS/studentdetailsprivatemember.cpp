#include<iostream>
using namespace std;
class student
{
    int id;
    char name[100];
    void info()
    {
        cout<<"details";
       cout<<id<<name<<endl;
    }
    public:
    void setdata()
    {
         cout<<"enter the student deatails ";
      cin>>id>>name;
        info();
    }
};
int main()
{
    student s1;
    s1.setdata();
}