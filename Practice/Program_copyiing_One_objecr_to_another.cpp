#include<iostream>
using namespace std;
class Student
{
       public:
    int fee;
    string coursename;
   
    void show()
{
    cout<<"enter the fee";
    cin>>fee;
    cout<<"enter course_name"
    cin>>course_name;


}
};
int main()
{
    Student s1,s2;
    s1.show();
   
}