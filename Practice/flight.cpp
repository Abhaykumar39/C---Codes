#include <iostream>
#include <string>

using namespace std;

class Flight {
    private:
        int flightNo;
        string destination;
        float distance;
        float fuel;
        
        void calculateFuel() {
            if (distance <= 1000) {
                fuel = 500;
            } else if (distance > 1000 && distance <=2000 ) {
                fuel = 1100;
            } else {
                fuel = 2200;
            }
        }
        
    public:
        void getInfo() {
            cout << "Enter flight number: ";
            cin >> flightNo;
            cout << "Enter destination: ";
            cin >> destination;
            cout << "Enter distance: ";
            cin >> distance;
            calculateFuel();
        }
        
void showInfo() {
            cout << "Flight number: " << flightNo << endl;
            cout << "Destination: " << destination << endl;
            cout << "Distance: " << distance << endl;
            cout << "Fuel: " << fuel << endl;
        }
};

int main() {
    Flight f;
    f.getInfo();
    f.showInfo();

}