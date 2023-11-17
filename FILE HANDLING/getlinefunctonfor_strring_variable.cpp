#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    string str;
    fout.open("aaa.txt", ios::out);
    fout<<" enter your data ";
    cout<<" your data is : ";
    getline(cin,str);
    fout<<str;

}