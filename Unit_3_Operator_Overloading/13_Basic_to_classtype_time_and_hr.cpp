#include<iostream>
using namespace std;
class Time
{
    int hr;
    int min;
    public:
    Time (int t)
    {
        hr=t/60;
        min=t%60;
    }
    void display()
    {
        cout<<hr<<" Hours "<<min<<" minutes "<<endl;
    }
};
int main()
{
    Time t1(90);
    int duration;
    cout<<"enter the duration : ";
    cin>>duration;
    t1=duration;
    t1.display();
}