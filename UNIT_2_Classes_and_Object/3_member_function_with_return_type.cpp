#include<iostream>
using namespace std;
class Demo
{
    private:
    int a,b;
    public:
    int input(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
    int large(int a=5,int b=10)
    {
        if(a>b)
        {
            return a;
        }
        else 
        {
            return b;
        }
    }
};
int main()
{
    Demo d;
    d.input(5,10);
    d.display();
    d.large();
}