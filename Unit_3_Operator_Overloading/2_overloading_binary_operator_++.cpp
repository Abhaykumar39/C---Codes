#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    void input()
    {
        cout<<"enter the values ";
        cin>>a>>b;
    }
    void operator++()
    {
        a=++a;
        b=++b;
    }
    void show()
    {
        cout<<a<<endl<<b;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.show();
    ++obj;
    obj.show();
}