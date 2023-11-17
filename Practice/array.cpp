#include<iostream>
using namespace std;
int main()
{
    int arr[100],average,sum=0,n;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter the elements";
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++)
    {   sum=sum+arr[i];
    average=sum/n;
      
    }
     cout<<average;
}