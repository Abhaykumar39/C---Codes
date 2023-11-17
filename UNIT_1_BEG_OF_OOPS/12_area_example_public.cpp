#include<iostream>
using namespace std;
class circle
{
    public:
    int radius;
    void area()
    {float res;
          cout<<"enter the radius ";
    cin>>radius;
        
        res=3.14*radius*radius;
        cout<<res;
    }
};
int main()
{
    circle c;
    c.area();
}