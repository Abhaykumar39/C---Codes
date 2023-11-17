#include<iostream>
using namespace std;
class rectangle
{
    int length,breadth;
    public:
    rectangle(int length,int breadth)
    {
        this->length = length;
        this->breaadth = breadth;
    }
    void show()
    {
        cout<<length*breadth;
    }
};
int main()
{
    rectangle s(5,6);
    s.show();
}
