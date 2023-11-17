#include<iostream>
using namespace std;
template<class rupees>
rupees sum(rupees coin, rupees note)
{
    return coin + note;
}
int main()
{
    cout<<sum(10,12);
    
}