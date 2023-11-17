#include<iostream>
using namespace std;
class demo
{
    public:
    void modify(int a)
    {
        a=a+5;
        cout<<a;
    }
};
int main()
{
   demo d;
   d.modify(10);
}