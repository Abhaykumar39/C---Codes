#include<iostream>
#include<string.h>
using namespace std;
class student 
{
    string name;
    int rollno;
    int marks;
    public:
    void setdata()
    {
        cout<<"enter the student datails ";
        for(int i=0;i<=4;i++)
        {
            cin>>name>>rollno>>marks;
        }

    }
    void getdata()
    {
        for(int i=0;i<=4;i++)
        {
            cout<<name<<" "<<rollno<<" "<<marks;
        }
    }
};
int main()
{
    student d[5];
    for(int i=0;i<=4;i++)
    d[i].setdata();
    for(int i=0;i<=4;i++)
    d[i].getdata();
}