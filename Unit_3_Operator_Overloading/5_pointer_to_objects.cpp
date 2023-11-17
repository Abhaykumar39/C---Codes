#include<iostream>
using namespace std;
class complex
{
    int real,imag;
    public:
    void setdata(int a, int b)
    {
        real = a; 
        imag = b;
    }
    void getdata()
    {
        cout << real;
        cout<<imag;
    }
};
int main()
{
    complex c,*p;
    p=&c;
    p->setdata(5,8);
    p->getdata();
}