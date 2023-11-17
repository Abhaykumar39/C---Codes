#include<iostream>
using namespace std;
class demo
{
    static int count;
    public:
    demo()
    {
        count++;
    }
    void show()
    {
        cout<<count;
    }
};
int demo::count;
int main()
{
    demo d1,d2,d3;
    d1.show();
    d2.show();
    d3.show();
}