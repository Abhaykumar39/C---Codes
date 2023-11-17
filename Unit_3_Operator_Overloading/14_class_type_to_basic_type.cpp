#include<iostream>
using   namespace std;
class demo
{
    int a;
    public:
    void getdata(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<a;
    }
    operator int()
{
    return d;
}
};

int main()
{
    demo d=90;
    d.getdata(6);
    d.display();
    int y;
    y=d;
    cout<<x;
}