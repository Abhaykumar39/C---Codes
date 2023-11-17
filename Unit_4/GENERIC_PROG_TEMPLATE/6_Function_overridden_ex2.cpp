#include<iostream>
using namespace std;
class base
{
    public:
    void show()
    {
        cout<<"show() of base class ";

    }
};
class derived: public base
{
    public:
    void show()
    {
        cout<<"show() of derived class ";
        base::show();
    }
};
int main()
{
    derived d;
    d.show();
}