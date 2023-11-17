#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("demo.dat");
    fin>>ch;
    while(!fin.eof())
    {
         cout<<ch;
         ch=fin.get();
    }
}
