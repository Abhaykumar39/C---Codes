#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int rollno;
    string name;
    string subject1, subject2, subject3;
    int maxmarks, minmarks;
    int marks1, marks2, marks3;

public:
    void calculate_total_marks()
    {
        cout << "total marks: " << (marks1 + marks2 + marks3);
    }

    void percentage_calculate()
    {
        int percentage = ((marks1 + marks2 + marks3) * 100) / (3 * maxmarks);
        if (percentage >= 60)
        {
            cout << "Result: Passed with First Division" << endl;
        }
        else if (percentage >= 50)
        {
            cout << "Result: Passed with Second Division" << endl;
        }
        else if (percentage >= 40)
        {
            cout << "Result: Passed with Third Division" << endl;
        }
        else
        {
            cout << "Result: Failed" << endl;
        }
    }
    void setdata()
    {
        cout << "enter the Rollno. and Name of students ";
        cin >> rollno >> name;
        cout << " enter name of subject1, subject2, subject3" << endl;
        cin >> subject1 >> subject2 >> subject3;
        cout << "enter the maximum marks";
        cin >> maxmarks;
        cout << " enter minimum marks ";
        cin >> minmarks;
        cout << "enter marks obtained in subject1,subject2,subject3: ";
        cin >> marks1 >> marks2 >> marks3;
    }
    int get_rno()
    {
        return rollno;
    }
    void display()
    {
        cout << "Rollno." << rollno << endl;
        cout << "Name" << name << endl;
        cout << "Subject1 :" << subject1<<endl;
        cout << "Subject2 :" << subject2<<endl;
        cout << "Subject3 :" << subject3<<endl;
        cout << "Maximum marks" << maxmarks << endl;
        cout << "Minimum marks" << minmarks << endl;
        cout << "Marks Obtained in subject 1 :" << marks1 << endl;
        cout << "Marks Obtained in subject 2 :" << marks2 << endl;
        cout << "Marks Obtained in subject 3 :" << marks3 << endl;
        calculate_total_marks();
        percentage_calculate();
    }
};
int main()
{
    Student s[3];
    for (int i = 0; i < 3; i++)
    {
        s[i].setdata();
    }
    for (int i = 0; i < 3; i++)
    {
        s[i].display();
    }
    int rno;
    cout<<"Enter the roll number: ";
    cin>>rno;
    for(int i = 0; i < 3; i++)
    if(s[i].get_rno()==rno)
    s[i].display();
}
