#include<iostream>
#include<string.h>
using namespace std;
class student
{
    string name;
    int rollno;
    string grades;
    public:
    void setdata()
    {
        cout<<"enter the datails of students";
        cin>>name>>rollno>>grades;
    }
    void getdata()
    {
        cout<<name<<rollno<<grades;
    }
};
int main()
{
    student s[5];
    for(int i=0; i<5;i++)
    
    {
        s[i].setdata(); 
       
    }
for(int i=0; i<5;i++)
{
     s[i].getdata();
}
}