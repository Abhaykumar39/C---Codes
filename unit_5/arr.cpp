#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5>arr1={1,2,3,4,5};
    array<int,5>arr2;
    array<int,7>arr3;
    for(int i=0;i<arr1.size();i++)
    cin>>arr2[i]; 
    arr1.swap(arr2);
    cout<<arr1.front()<<endl;
    cout<<arr2.front()<<endl;
    cout<<arr1.back()<<endl;
    cout<<arr2.back()<<endl;
    cout<<arr2.size()<<endl;
    arr3.fill(9);
    for(int i=0;i<arr3.size();i++)
    cout<<arr3[i];
    cout<<arr1.at(2)<<endl;

}
