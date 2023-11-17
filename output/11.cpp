#include <iostream>
int main() {
    try {
        // Code that might throw an exception
        int dividend, divisor;
        std::cout << "Enter dividend: ";
        std::cin >> dividend;
        std::cout << "Enter divisor: ";
        std::cin >> divisor;

        if (divisor == 0) {
            // Throwing an exception
            throw "Divisor cannot be zero!";
        }

        int quotient = dividend / divisor;
        std::cout << "Quotient: " << quotient << std::endl;
    }
    catch (const char* errorMessage) {
        // Catching and handling the exception
        std::cerr << "Error: " << errorMessage << std::endl;
    }
    catch (...) {
        // Catching any other type of exception
        std::cerr << "Unknown exception occurred!" << std::endl;
    }

    return 0;
}
