#include <iostream>
using namespace std;

class Fibonacci {
private:
    int n;
public:
    Fibonacci(int num) {
        n = num;
    }
    void generate() {
        int num1 = 0, num2 = 1, nextNum;

        for(int i=0; i<n; i++) {
            if(i <= 1) {
                nextNum = i;
            } else {
                nextNum = num1 + num2;
                num1 = num2;
                num2 = nextNum;
            }

            cout << nextNum << " ";
        }
    }
};
int main() {
    int n;
    cout << "Enter the number of terms to generate in Fibonacci series: ";
    cin >> n;
    Fibonacci fib(n);
    fib.generate();
    return 0;
}
