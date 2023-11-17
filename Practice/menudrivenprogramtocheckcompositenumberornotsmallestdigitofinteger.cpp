#include <iostream>
using namespace std;

int Composite(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0)
            return true;
    }
    return false;
}

int smallestDigit(int n) {
    int smallest = n % 10;
    while (n > 0) {
        int digit = n % 10;
        if (digit < smallest)
            smallest = digit;
        n /= 10;
    }
    return smallest;
}

int main() {
    int choice, n;
    while (true) {
        cout << "Enter your choice:" << endl;
        cout << "1. Check whether the number is composite or not" << endl;
        cout << "2. Find the smallest digit in integer" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter a number: ";
                cin >> n;
                if (Composite(n))
                    cout << n << " is composite." << endl;
                else
                    cout << n << " is not composite." << endl;
                break;
            case 2:
                cout << "Enter an integer: ";
                cin >> n;
                cout << "The smallest digit in " << n << " is " << smallestDigit(n) << "." << endl;
                break;
            case 3:
                return 0;
         }
    }
}