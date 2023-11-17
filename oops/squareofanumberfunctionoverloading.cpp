// #include<iostream>
// using namespace std;
// class number
// {
//     public:
//     square(int a)
//     {
//         cout<<"enter the value of a" ;
//         cin>>a;
//          cout<<a*a;
//     }
// };
// int main()
// {
//     number s;
//     s.square(0);  
// }
#include<iostream>
using namespace std;
void square(int);
void square (float);
int main()
{
    int a;
    float b;
    cout<<"enter the value ";
    cin>>a>>b;
    square(a);
    square(b);
}
void square(int a)
{
    cout<<a*a<<endl;
}
void square(float b)
{
    cout<<b*b<<endl;
}