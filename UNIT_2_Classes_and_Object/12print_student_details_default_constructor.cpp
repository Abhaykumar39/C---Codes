#include<iostream>
#include<string.h>
using namespace std;
class student
{
    string name;
    float fee;
    public:
    student()
    {
        cout<<("enter the  name of student ");
        cin>>name;
        cout<<"enter the fees of student ";
        cin>>fee;  
    }
    void show()
    {
        cout<<name<<fee;
    }
};
int main()
{
    student s1;
    s1.show();
}