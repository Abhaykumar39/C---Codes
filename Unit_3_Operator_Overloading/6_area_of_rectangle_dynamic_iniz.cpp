#include<iostream>
using namespace std;
class rectangle
{
    int length,breadth;
    public:
    void setdata(int a, int b)
    {
        length = a;
        breadth = b;
    }
    void getdata()
    {
        cout<<length*breadth;
    }
};
int main()
{
    rectangle *p= new rectangle;
    p->setdata(5,8);
    p->getdata();
}