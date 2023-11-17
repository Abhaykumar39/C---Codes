#include<iostream>
using namespace std;
class A
{
    protected:
    int x;
    public:
    void input()
    {
        cout<<" enter the value of x : ";
        cin>>x;
    }
};
class B : public A
{
    int y;
    public:
    void getdata()
    {
       cout<<" enter the value of y : ";
       cin>>y;
    }
    void sum()
    {
        cout<<x+y<<endl;
    }
};
int main()
{
    B obj;
    obj.input();
    obj.getdata();
    obj.sum();
}