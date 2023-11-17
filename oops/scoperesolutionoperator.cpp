#include<iostream>
using namespace std; 
class Student
{
    public:
    abc();
    static int f()
    {
        cout<<"hello"<<endl;
    }
} ;
Student ::abc()
{
    cout<<"Good to KNOW"<<endl;
}  
int x=20;
int main()
//1.scope resulution operator is used is used to access the valof global variable of same name. 
//2.scope resulution operator is used to define or use the function outside the class.
//3.to access static member of class.
{
    Student c;
    c.abc();
   //student ::f();//static member of class
    int x=50;
    cout<<x<<endl;
    cout<<::x<<endl;
}