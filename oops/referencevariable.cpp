#include<iostream>
using namespace std;
//int main()
//{
//     int a=5,x=6;
// int &b=a;
// cout<<a;
// int &b=x;
// cout<<b;// error becase b is already declared.
// }
//#include<iostream>
//using namespace std;
//int main()
//{
   // int a=5;
    //int &b=a;
    //cout<<a<<endl;
    //b=b+6;
    //cout<<b<<endl;
    //cout<<a<<endl;
//}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    printf("enter the value of a and b\n");
    cin>>a>>b;
    swap(&a,&b);
    printf("%d %d",a,b);
}