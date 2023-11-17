#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    string name, rno;
    fout.open("fff.txt", ios::out);
    if (fout.is_open())
    {
        cout << "file open successfully...";
    }
    cout << " enter studen id..." << endl;
    getline(cin, rno);
    cout<< " enter student name ";
    getline(cin, name);
    fout << (rno + " " + name);
    fout.close();
}