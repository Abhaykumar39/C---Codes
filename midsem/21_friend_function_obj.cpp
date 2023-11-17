#include <iostream>
using namespace std;
class def;
class abc
{
    int a;
public:
    void sol()
    {
        cout << "enter value of a";
        cin >> a;
    }
    friend void large(abc obj1, def obj2);
};
class def
{
    int b;
public:
    void solu()
    {
        cout << "enter value of b ";
        cin >> b;
    }
    friend void large(abc obj1,def obj2);
};
void large(abc obj1, def obj2)
{
    if (obj1.a > obj2.b)
        cout << "a is largest";
    else if (obj1.a < obj2.b)
        cout << "b is largest";
    else
    {
        cout << "both are equal";
    }
}
int main()
{
    abc obj1;
    def obj2;
    obj1.sol();
    obj2.solu();
    large(obj1,obj2);
}