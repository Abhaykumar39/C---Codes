#include<iostream>
using namespace std;
class Demo
{
    int a,b;
    public:
    void input()
    {
        cout<<"enter the value ";
        cin>>a>>b;
    }
    void show()
    {
        cout<<a<<" "<<b;
    }
    friend void operator-(Demo &d);
};
void operator-(Demo &d)
{
    d.a=-d.a;
    d.b=-d.b;
}
int main()
{
     Demo d;
    d.input();
    cout<<"before operator overloading ";
    d.show();
    -d;
    cout<<"after operator overloading ";
    d.show();
}