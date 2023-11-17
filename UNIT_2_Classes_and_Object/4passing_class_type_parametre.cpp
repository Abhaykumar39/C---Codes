#include<iostream>
using namespace std;
class Demo
{
    public:
      int a;
    void input()
    {
        cout<<"enter the value of a"<<endl;
        cin>>a;
    }
    void output()
    {
        cout<<a;
    }
    int large(Demo d1,Demo d2)
    {
        if(d1.a>d2.a)
        {
            cout<<"d2.a is largest";
        }
        else if (d1.a<d2.a)
        {
            cout<<"d2.a is largest";
        }
        else
        {
            cout<<"both are equal";
        }
    }
};
int main()
{
    Demo d1,d2;
    d1.input();
    d2.input();
    d1.large(d1,d2);
    d1.output();
     d2.output();
    cout<<d1.a<<endl;
    cout<<d2.a<<endl;
}