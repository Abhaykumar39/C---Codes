#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    vector<int> v2 = {1, 2, 3};

    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(9);
    cout << " elements of v1 are : ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << " " << v1[i] << endl;
    }
    cout << "size of vector v1 :  " << v1.size() << endl;

    cout << " elements of v2 are : ";
    for (int i = 0; i < v2.size(); i++)
    {
        cout << " " << v2[i] << endl;
    }
    v1.swap(v2); 
    cout << "v1 front : " << v1.front() << endl;
    cout << "v1 back : " << v1.back() << endl;
    cout << " v2 front : " << v2.front() << endl;
    cout << "v2 back : " << v2.back() << endl;

    cout << "element at position 2 : " << v1.at(2) << endl;
    
    v1.pop_back();
    cout << " size of v1 : " << v1.size();
}
