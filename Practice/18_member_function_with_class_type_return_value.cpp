#include <iostream>
using namespace std;
class demo
{
public:
    int a;
    void getdata();
    void setdata();
    demo sum(demo, demo);
};
void demo::getdata()
{
    cout << "enter the value " << endl;
    cin >> a;
}
demo demo::sum(demo d1, demo d2)
{
    demo d3;
    d3.a = d1.a + d2.a;
    return d3;
}
int main()
{
    demo d1, d2, d3;
    d1.getdata();
    d2.getdata();
    d3 = d3.sum(d1, d2);
    cout << d3.a;
}