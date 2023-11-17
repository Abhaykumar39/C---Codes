#include<iostream>
using namespace std;
void square(int);
void square(float);
int main()
{
    int a;
    float b;
    cout<<"enter the value of a and b ";
    cin>>a>>b;
    square(a);
    square(b);}
    
    void square(int a)
    {
        cout<<a*a;
    }
    void square(float b)
    {
        cout<<b*b;
    }
