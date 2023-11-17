#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // ifstream fin;
    // char ch;
    // fin.open("abc.txt", ios::in);
    // fin>>ch;
    // while(!fin.eof())
    // {
    //      cout<<ch;
    //      ch=fin.get();
    // }
    ofstream  fout;
    fout.open("abc.txt", ios::app);
    fout<<" hello brother ";
   
}   