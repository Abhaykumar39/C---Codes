#include<iostream>
using namespace std;
// global variable
int x=9;
class Demo {
    public:
    int y=19;
    void display();
};
void Demo::display()
{
    cout<<"hello";
}
int main(){
    Demo d;
    int x=10;
    cout<<x<<endl;
    cout<<::x<<endl;
    d.display();
}


