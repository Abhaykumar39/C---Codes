#include<iostream>
using namespace std;
class student
{int fee;
char coursename[100];
    public:
    void print()
    {
    cout<<("enter the fee");
    cin>>fee;
    cout<<("enter the coursename");
    cin>>coursename;
    }
    void print2()
    {
        cout<<fee<<" "<<coursename;
    }

};
int main()
{
    student s1, s2;
}