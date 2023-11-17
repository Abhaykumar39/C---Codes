#include<iostream>
using namespawce std;
class Circle
{
    private:
    int radius;
    public:
    void area()
    {
        float res;
        cout<<"enter the value of radius";
        cin>>radius;
        res=3.14*radius*radius;
        cout<<res;
    }
};
int main()
{
    Circle c;
    c.area();
}