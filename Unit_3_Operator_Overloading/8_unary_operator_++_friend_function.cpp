#include<iostream>
using namespace std;
class Demo
{
    int a,b;
    public:
    void input()
    {
        cout<<"enter the value of a and b : ";
        cin>>a>>b;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
    friend void operator++(Demo &d);
};
void operator++(Demo &d)
{
    d.a=d.a+2;
    d.b=d.b+2;
}
int main()
{
    Demo d;
    d.input();
    d.show();
    ++d;
    d.show();
}