#include<iostream>
using namespace std;
class Student
{
    private:
    int mark1,mark2;
    public:
    void setdata(int mrk1,int mrk2)
    {
        mark1 = mrk1;
        mark2 = mrk2;
    }
    void display()
    {
        cout<<mark1<<" "<<mark2<<endl;
    }
};
int main()
{
    Student s1;
    int mrk1,mrk2;
    cout << "enter mark one:;
    cin>>mr1;
    cout<<"mark 2";
    cin>>mr2;
    s1.setdata(mr1,mr2); 
    s1.display();
}