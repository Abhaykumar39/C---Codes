#include<iostream>
using namespace std;

inline float area_circle(float radius)
 {
    return 3.14 * radius * radius;
}

inline float area_rectangle(float length, float width) {
    return length * width;
}

inline float area_square(float side) {
    return side * side;
}

inline float area_triangle(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float radius, length, width, side, base, height;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area_circle(radius) << endl;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << area_rectangle(length, width) << endl;

    cout << "Enter the side of the square: ";
    cin >> side;
    cout << "Area of the square: " << area_square(side) << endl;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << area_triangle(base, height) << endl;

    return 0;
}
