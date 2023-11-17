#include<iostream>
using namespace std;
template < class A , class B >
float sum( A a, B b )
{
    return a+b;
}
int main()
{
    cout<<sum(90,6.7)<<endl;
    cout<<sum(8.1,100);
}