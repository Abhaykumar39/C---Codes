#include<iostream>
using namespace std;
template < class T >
T large(T a, T b)
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
int main()
{
    cout<<large(1,5)<<endl;
    cout<<large(4.6,4.2)<<endl;
    cout<<large('d','e');
}