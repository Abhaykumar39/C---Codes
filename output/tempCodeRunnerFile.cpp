#include <iostream>
#include <string>

using namespace std;

template <typename T>
class ARRAY {
private:
    T* Data;
    int size;

public:
    ARRAY(int arraySize) : size(arraySize) {
        Data = new T[size];
    }

    ~ARRAY() {
        delete[] Data;
    }

    void insert(T value) {
        static int index = 0;
        if (index < size) {
            Data[index++] = value;
        }
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << Data[i] << " ";
        }
        cout << endl;
    }

    void sort() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (Data[j] > Data[j + 1]) {
                    T temp = Data[j];
                    Data[j] = Data[j + 1];
                    Data[j + 1] = temp;
                }
            }
        }
    }
};

int main() {
    ARRAY<int> intArray(5);
    intArray.insert(5);
    intArray.insert(2);
    intArray.insert(7);
    cout << "Integer Array: ";
    intArray.display();
    intArray.sort();
    cout << "Sorted Integer Array: ";
    intArray.display();

    ARRAY<char> charArray(4);
    charArray.insert('c');
    charArray.insert('a');
    charArray.insert('b');
    cout << "Character Array: ";
    charArray.display();
    charArray.sort();
    cout << "Sorted Character Array: ";
    charArray.display();

    ARRAY<float> floatArray(3);
    floatArray.insert(3.14);
    floatArray.insert(1.23);
    floatArray.insert(2.45);
    cout << "Float Array: ";
    floatArray.display();
    floatArray.sort();
    cout << "Sorted Float Array: ";
    floatArray.display();

    ARRAY<string> stringArray(3);
    stringArray.insert("apple");
    stringArray.insert("banana");
    stringArray.insert("cherry");
    cout << "String Array: ";
    stringArray.display();
    stringArray.sort();
    cout << "Sorted String Array: ";
    stringArray.display();

    return 0;
}
