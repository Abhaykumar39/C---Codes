#include <iostream>
using namespace std;
class student
{
    int id;
    string name;

public:
    void input()
    {
        cout << "enter student details : " << endl;
        cin >> id >> name;
    }
};
class marks
{
    int m1, m2, m3;

public:
    int getdata()
    {
        cout << "enter marks : " << endl;
        cin >> m1 >> m2 >> m3;
        return m1 + m2 + m3;
    }
    void show()
    {
        cout << m1 << m2 << m3;
    }
};
class result : public student, public marks
{
    int total;
    float avg;

public:
    void calculate()
    {
        total = getdata();
        avg = (total / 3);
        cout << "\naverage: "<<avg;
    }
};
int main()
{
    result s1;
    s1.input();
    s1.calculate();
}
