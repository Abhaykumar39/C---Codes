#include<iostream>
#include<string.h>
using namespace std;
class air
{
    int flightno;
    string destination;
    float distance;
    float fuel;
    int calfuel()
{
    if(distance<=1000)
    {
        fuel=500;
    }
    else if(distance>1000&& distance<=2000)
    {
        fuel=1100;
    }
    else
    {
        fuel=2000;
    }
}
public:
void info(){
    cout<<"enter the details ";
    cin>>flightno>>destination>>distance; 
    calfuel();
}
void showinfo()
{
    cout<<flightno<<" "<<destination<<" "<<distance<<" "<<fuel<<endl;
}
};
int main()
{
    air c;
    c.info();
    c.showinfo();
}