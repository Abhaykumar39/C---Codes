#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("def.txt",ios::out);
    if(fout.is_open())
    {
        cout<<"file exist ";
    }
    fout<<" this is your kind information ";
    fout.close();

}