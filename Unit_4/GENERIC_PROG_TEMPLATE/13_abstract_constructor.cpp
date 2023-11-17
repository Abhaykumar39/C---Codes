#include <iostream>
using namespace std;
class student
{
    int id;

public:
    student()
    {
    }
    student(int x)
    {
        id = x;
    }
    int getId()
    {
        return id;
    }
    virtual void show() = 0;
};
class test : public student
{
    int rollno, id;

public:
    test(int x, int y)
    {
        rollno = x;
        id = y;
    }
    void show()
    {
        cout << id << endl;
        cout << "roll no is : " << rollno << endl;
    }
};
int main()
{
    test t(10, 2);
    t.show();
    student *s;
    test t1(1, 4);
    s = &t1;
    s->show();
}