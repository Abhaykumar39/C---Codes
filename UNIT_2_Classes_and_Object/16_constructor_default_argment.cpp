#include<iostream>
using namespace std;
class demo
{
    int a,b,c;
    public:
    demo(int x=10,int y=20,int z=30)
    {
        a=x;
        b=y;
        c=z;
    }
    void show()
    {
    cout<<a+b+c<<endl;
    }

};
int main()
{
    demo d1, d2(4),d3(4,5),d4(5,5,5);
    d1.show();
    d2.show();
    d3.show();
    d4.show();
}