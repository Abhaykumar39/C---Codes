#include<iostream>
#include<array> 
using namespace std;
template<typename T>
class A
{
    T a,b;
    public:
    void input()
    {
        cout<<"Enter elements: ";
        cin>>a>>b;
    }
    T sum(){
        return a+b;
    }
};
int main()
{
    A<int>a1;
    a1.input();
    cout<<a1.sum()<<endl;
    A<float>a2;
    a2.input();
    cout<<a2.sum()<<endl;
}