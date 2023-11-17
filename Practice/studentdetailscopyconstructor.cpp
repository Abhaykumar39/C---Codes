#include<iostream>
#include<string.h>
using namespace std;
class student
{
    string name;
    int id;
    string coursename;
    public:
   
    student(string names, int i_d, string course_name)
    {
        name = names;
        id=i_d=;
         coursenamecourse_name =
    }
    print()
    {
        cout<<name<<" "<<id<<" "<<coursename;
    }
};
int main()
{
    student s1("bob");
    student s2("bob",97);
    student s3("bob",97,"bca");
    s1.print();
    s2.print();
    s3.print();
}