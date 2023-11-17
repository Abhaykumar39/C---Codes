#include<iostream>
using namespace std;
inline int circle(int radius)
{
    return 3.14*radius*radius;
}
int main()
{ int radius;
   cout<<"enter the value of radius"<<endl;
   cin>>radius;
    cout<<"area of circle"<<" "<<circle(radius);
}