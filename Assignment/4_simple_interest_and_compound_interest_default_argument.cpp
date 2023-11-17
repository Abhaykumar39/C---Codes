#include <iostream>
#include <cmath>
using namespace std;

float simpleInterest(float time = 1, float principal = 1000, float rate = 5) {
    return (principal * rate * time) / 100;
}

float compoundInterest(float time = 1, float principal = 1000, float rate = 5, int n = 1) {
    return principal * pow(1 + (rate / (n * 100)), n * time);
}

int main() {
    float principal, rate;
    int time, n;

    cout << "Enter time in years: ";
    cin >> time;
    cout<<"enter the principle: ";
    cin>>principal;
    cout<<"enter the rate :";
    cin>>rate;
    cout << "Enter number of times interest is compounded annually:";
    cin >> n;

    float simple = simpleInterest(time,rate,principal);
    float compound = compoundInterest(time, principal, rate, n);

    cout << "Simple interest = " << simple << endl;
    cout << "Compound interest = " << compound << endl;

    return 0;
}
