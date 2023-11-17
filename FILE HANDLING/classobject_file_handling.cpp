#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class student
{
    string id;
    string name;

public:
    void getdata()
    {
        cout << " enter id: ";
        getline(cin, id);
        cout << " name: ";
        getline(cin, name);
    }
    void show()
    {
        cout << " id: " << id << " name: " << name;
    }
};
int main()
{
    student s1;
    ofstream fout;
    fout.open("xxx.dat", ios::out);
    s1.getdata();
    s1.show();
    fout.write((char *)&s1, sizeof(s1));
    fout.close();
    ifstream fin;
    student s2;
    cout << "\n";
    fin.open("def.txt", ios::in );
    fin.read((char *)&s2, sizeof(s2));
    s2.show();
}