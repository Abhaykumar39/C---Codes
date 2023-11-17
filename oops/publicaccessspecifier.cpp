#include<iostream>
using namespace std;
class Circle
{
    public:
    int radius;
    void area()
    {
        float res;
        res = 3.14*radius*radius;
        cout<<res<<endl;
    }
};
int main()
{
    Circle c;
    c.radius =5;
    c.area();
}