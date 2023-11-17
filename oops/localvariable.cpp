#include<iostream>
using namespace std;
class Demo
{
    public:
    void modify(int a)
    {
        a=a+5;
        cout<<a<<endl;

    }
};
int main()
{
    Demo d;
    d.modify(10);
}