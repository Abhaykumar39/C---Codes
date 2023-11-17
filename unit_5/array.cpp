#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};
    array<int, 5> arr1;
    arr1.fill(3);
    for (int i = 0; i < arr1.size(); i++)
        cout << arr1.at(i) << " ";
    for (int i = 0; i < arr1.size(); i++)
        cin >> arr1[i];
    cout << arr1.front() << " " << arr1.back() << endl;
    arr.swap(arr1);
    for (int i = 0; i < arr1.size(); i++)
        cout << arr1[i] << " ";
}