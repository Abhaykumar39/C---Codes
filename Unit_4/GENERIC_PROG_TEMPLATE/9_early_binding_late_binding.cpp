#include<iostream>
using namespace std;
class Base 
{
    public:
    virtual void show()
    {
        cout<<"show () of base class " ;
    }
    virtual void print()
    {
        cout<<"hello"<<endl;
    }
};
class derived : public Base
{
    public:
    void show()
    {
        cout<<"show () of derived class " ;
    }

void print()
{
    cout<<"bye"<<endl;
}
};
int main()
{
    Base *b;
    derived d;
    b=&d;
    b->show();
    b->print();
}