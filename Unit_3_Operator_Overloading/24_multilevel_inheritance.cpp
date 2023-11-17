#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int id;
    string name;
    public:
    void input()
    {
    cout<<" enter student details : ";
    cin>>id>>name;
    }
};
class marks:public student
{
    protected:
    int m1,m2,m3;
    public:
    int getdata()
    {
        cout<<" enter marks :  ";
        cin>>m1>>m2>>m3;
        return m1+m2+m3;
    }
};
class results:public marks
{
    int total,avg;
    public:
    void calculate()
    {
        total = getdata();
        avg = total/3;
        cout<<"average is : "<<avg<<endl;
    }
};
int main()
{ results c;
    c.input();
    c.calculate();
}