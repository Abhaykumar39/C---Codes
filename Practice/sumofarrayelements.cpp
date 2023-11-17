#include<iostream>
using namespace std;
class demo
{
    int a[5],sum=0,i;
    public:
    getdata()
    {
        cout<<"enter the elements";
        for(i=0;i<5;i++)
        {
            cin>>a[i];
        }
    }
    setdata()
    {
        for(i=0;i<5;i++)
        sum=sum+a[i];
        cout<<sum;
    }
};
int main()
{
    demo d;
    d.getdata();
    d.setdata();
}