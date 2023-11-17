#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int c;
     cout<<"before swaping a="<<a<<" "<<"b= "<<b<<endl;
    c=a;
    a=b;
    b=c;
     cout<<"after swaping a="<<a<<" "<<"b= "<<b<<endl;


}
int main()
{
    int a,b;

    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
   
    swap(a,b);
     

}