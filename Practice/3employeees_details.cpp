#include<iostream>
using namespace std;
class employee
{
    string name;
    int yearjoining;
    string address;
    int salary;
    public:
    void setdata()
    {
        cout<<"enter the details of employees"<<endl;
        cin>>name>>yearjoining>>address>>salary;
    }
    void getdata()
    {
        cout<<name<<yearjoining<<address<<salary<<endl;
    }
};
int main()
{
    employee e[3];
    for(int i=0; i<3; i++)
    
    {
         e[i].setdata();
    }  
     for(int i=0; i<3; i++)
     {
          e[i].getdata();
     }
}