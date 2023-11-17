#include<iostream>
using namespace std;
void sum(int a=1,int b=6,int c=5)
{
       cout<<a+b+c<<endl;
}
int main()
{
   
    sum(5,6,7);
    sum(5,6);
    sum(5);
    sum();
}