#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, breadth;

public:
    
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

  
    Rectangle(int side) {
        length = side;
        breadth = side;
    }

    
    int area() {
        return length * breadth;
    }
};

int main() {
 
    Rectangle r1;
    cout << "Area of r1: " << r1.area() << endl;

    Rectangle r2(5, 10);
    cout << "Area of r2: " << r2.area() << endl;

    Rectangle r3(7);
    cout << "Area of r3: " << r3.area() << endl;

    return 0;
}
