#include <iostream>
using namespace std;
int main()
{
    int arr[4], sum = 0, i;
    cout << "enter elements in array" << endl;
    for (i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < 4; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
}