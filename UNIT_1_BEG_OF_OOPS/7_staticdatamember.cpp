/*#include<iostream>
using namespace std;
class student
{
    int id;
    static char coursename[50];
    public:

    void setdata()
    {
        cout<<"enter the students details"<<endl;
        cin>>id>>coursename;
    }
    void getdata()
    {
        cout<<id<<coursename<<endl;
    }
};
char student::coursename[50]="bca";
int main()
{
    student s1;
    s1.setdata();
    s1.getdata();
}*/
#include<iostream>
using namespace std;
class demo
{
    int x,y;
    static int z;
    public:
    void setdata(int a,int b)
    {
        x=a;
        y=b;
        z=z+1;
    }
    void getdata()
    {
        cout<<x<<y<<z;
    }
};
int demo:: z;// for static member.
int main()
{
    demo s1;
    s1.setdata(2,3);
    s1.getdata();
}