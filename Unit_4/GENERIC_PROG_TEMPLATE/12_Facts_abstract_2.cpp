#include<iostream>
using namespace std;
class Test
{
    public:
    void getx()
    {
        cout<<" x is 20 ";
    }
    virtual  void show ()= 0;
};
class derived : public Test
{
    public:
    void show()
    {
        cout<<" derived class " ;
    }
};
int main()
{
    Test *t;
    derived d;
    t=&d;
    t->show();
    t->getx();
}