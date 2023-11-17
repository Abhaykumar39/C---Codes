#include<iostream>
using namespace std;
class sum
{
    public:
    int a,b;
    void totalsum(int c)
    {
        int e;
        c=a;
        cout<<"enter the value of a and b"<<endl;
        cin>>a>>b;
    e=a+b+c;
    cout<<e<<endl;
    }
};
int main()
{
    sum d;
    d.totalsum(5);
}