#include<iostream>
using namespace std;

class demo
{
    static int a;
    public:
    static void input()
    {
        cout<<"enter the value of a ";
        cin>>a;
        cout<<a;
    }
};
int demo::a;
int main()
{
    demo :: input();
}
