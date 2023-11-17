#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}


void swapByAddress(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;

 swapByValue(x, y);
    cout << "After swapping by value: x = " << x << ", y = " << y << endl;

    swapByReference(x, y);
    cout << "After swapping by reference: x = " << x << ", y = " << y << endl;

    swapByAddress(&x, &y);
    cout << "After swapping by address: x = " << x << ", y = " << y << endl;

}
