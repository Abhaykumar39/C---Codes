#include<iostream>
using namespace std;
class time
{
    int hr;
    int min;
    public:
    void getdata()
    {
        cout<<" enter the value of hr and min : ";
        cin >> hr>> min;
    }
    void display()
    {
        cout<<hr<<" "<<min<<endl;
    }
    operator int()
    {
        return ((hr*60)+min);
    } 

};
int main()
{
    time t;
    t.getdata();
    t.display();
    int x;
    x=t;
    cout<<x<<endl;

}