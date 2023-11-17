#include<iostream>
using namespace std;
class secf
{
    int id;
    static char coursename[20];
    public:
    void setdata()
    {
        cout<<"enter id ";
        cin>>id;
    }
    void getdata()
    {
        cout<<id<<coursename<<endl;
    }
};
char secf::coursename[20]="BCA";
int main()
{
    secf s1,s2;
    s1.setdata();
    s1.getdata();
    s2.setdata();
    s2.getdata();
}