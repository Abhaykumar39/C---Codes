#include<iostream>
using namespace std;
class shape
{
    public:
    virtual void show()=0;
};
class circle : public shape
{
    public:
    void show()
    {
        cout<<" Area of circle ptr2"<<endl;
    }
};
int main()
{
    circle c;
    c.show();
}