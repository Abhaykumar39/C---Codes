#include <iostream>
using namespace std;
int main()
{
    const float PI = 3.14;
    float radius;
    cout << "Enter the radius";
    cin >> radius;
    int area = radius * radius * PI;
    cout << area << endl;
}