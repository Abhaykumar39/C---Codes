#include <iostream>
using namespace std;
class A
{
protected:
    int x;

public:
    void input()
    {
        cout << " enter the value of x : ";
        cin >> x;
    }
};
class B : private A
{
    int y;

public:
    void getdata()
    {
        cout << "enter the value of y : ";
        cin >> y;
        input();
    }
    void display()
    {
        cout << x + y;
    }
};
int main()
{
    B b;
    b.getdata();
    b.display();
}