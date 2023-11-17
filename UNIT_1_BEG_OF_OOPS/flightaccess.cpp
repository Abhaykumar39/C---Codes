++++++#include<iostream>
#include<string>
using namespace std;
class flight
{
    private:
    int flightnumber;
    string destination;
    float distance;
    float fuel;
    void getfuel()
    {
        if(distance<=1000)
        {
           fuel = 500 ;
        }
        else if(distance>1000 && distance<=2000)
        {
            fuel = 1100 ;
        }
        else
        {
         fuel = 2200;
        }
    }
    public:
    void info()
    {
        cout<<"enter the flight number"<<endl;
        cin>>flightnumber;
        cout<<"enter destination"<<endl;
        cin>>destination;
        cout<<"enter distance"<<endl;
        cin>>distance;
        getfuel();
    }
    void showinfo()
    {
        cout<<"flight no."<<flightnumber<<endl;
        cout<<"destination "<<destination<<endl;
        cout<<"distance"<<distance<<endl;
        cout<<"fuel:"<<fuel<<endl;
    }
};
int main()
{
    flight s;
    s.info();
    s.showinfo();
}
/*#include <iostream>
#include <string>

using namespace std;
class Flight
{
private:
    int flightNo;
    string destination;
    float distance;
    float fuel;

    void calculateFuel()
    {
        if (distance <= 1000)
        {
            fuel = 500;
        }
        else if (distance > 1000 && distance <= 2000)
        {
            fuel = 1100;
        }
        else
        {
            fuel = 2200;
        }
    }

public:
    void getInfo()
    {
        cout << "Enter flight number: ";
        cin >> flightNo;
        cout << "Enter destination: ";
        cin >> destination;
        cout << "Enter distance: ";
        cin >> distance;
        calculateFuel();
    }
    void showInfo()
    {
        cout << "Flight number: " << flightNo << endl;
        cout << "Destination: " << destination << endl;
        cout << "Distance: " << distance << endl;
        cout << "Fuel: " << fuel << endl;
    }
};
int main()
{
    Flight f;
    f.getInfo();
    f.showInfo();
}*/
