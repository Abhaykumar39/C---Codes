#include<iostream>
using namespace std;
class Base 
{
    public:
    void show()
    {
        cout<<"show () of base class " ;
    }
};
class derived : public Base
{
    public:
    void show()
    {
        cout<<"show () of derived class " ;
    }
};
int main()
{
    Base *b;
    derived d;
    b=&d;
    b->show();
}