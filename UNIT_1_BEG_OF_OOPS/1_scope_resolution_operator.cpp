#include<iostream>
using namespace std;
class student
{
public:
    int id;
    string name;
    void display();
};
void student ::display()
{
    cout << "enter details";
    cin >> id >> name;
    cout << id << " " << name << endl;
}
int main()
{
    student s1, s2;
    s1.display();
    s2.display();
}