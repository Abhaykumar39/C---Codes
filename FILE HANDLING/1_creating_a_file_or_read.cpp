#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("demo.dat",ios::out);
    fout<<" my name is abhay ";
}