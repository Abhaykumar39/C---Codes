#include<iostream>
using namespace std;
void multiply(int,int);
int main()
{
    int a,b;
    cout<<"Enter the value of a and b";
    cin>>a>>b;
    multiply(a,b);
}
void multiply(int a, int b)
{
    cout<<a*b<<endl;
}