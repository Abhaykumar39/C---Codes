#include <iostream>
using namespace std;

class A
{
protected:
    int val;
    virtual void print() = 0;
};

class B : public virtual A
{
public:
    B()
    {
        val = 20;
    }
    void print()
    {
        cout << "Value of val from B: " << val << endl;
    }
};

class C : public virtual A
{
public:
    C()
    {
        val = 40;
    }
    void print()
    {
        cout << "Value of val from C: " << val << endl;
    }
};

class D : public B, public C
{
public:
    void print()
    {
        B::print();
        C::print();
        cout<< "Value of val from D: " <<val << endl;
    }
};

int main()
{
    D d1;
    d1.print();
    return 0;
}
