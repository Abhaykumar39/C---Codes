#include<iostream>
#include<string>
using namespace std;
class Demo
{
    public:
  int a=5;
void print()
{
 a=a+1;
 cout<<a;
}
};
int main()
{
    Demo d;
    d.print();
}