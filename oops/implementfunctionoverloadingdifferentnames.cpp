#include<iostream>
using namespace std;
void sum(int,float);
void sum(float,int);
int main()
{
    int a;
    float b;
        cout<<"enter the value of a and b ";
        cin>>a>>b;
        sum(a,b);
        sum(b,a);
}
void sum(int a,float b)
{
    cout<<a+b<<endl;
}
void sum(float a,int b)
{
    cout<<a+b;
}
