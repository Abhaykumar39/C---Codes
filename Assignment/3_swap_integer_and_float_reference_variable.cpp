#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    float p = 1.5, q = 2.5;

    cout << "Before swapping: " << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "p = " << p << ", q = " << q << endl;

    swap(x, y);
    swap(p, q);

    cout << "After swapping: " << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "p = " << p << ", q = " << q << endl;

    return 0;
}
