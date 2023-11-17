#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("def.txt",ios::in);
    fin>>ch;
    while(!fin.eof())
    {
        cout<<ch;
        ch=fin.get();
    }
}