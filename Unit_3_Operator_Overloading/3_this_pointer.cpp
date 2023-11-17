#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    demo(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }

};
int main()
{
    demo s(5,6);
    s.show();
}