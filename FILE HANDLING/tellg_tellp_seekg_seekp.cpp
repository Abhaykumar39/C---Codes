#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fio;
    fio.open("rrr.txt",ios::out|ios::in);
    fout<<" this is a sample program ";
    cout<<" currenr position of pointer "<<fio.tellp();
int pos;
    cout<<"enter position where you want to read ";
    cin>>s;
    fio.seekg(s,ios::beg);
    cout<<"current position of pointer "<<fio.tellg();
    fio.getline(s,30);
    cout<<s;
}