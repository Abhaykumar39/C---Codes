#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        int rollNo;
        string name;
        string subject1, subject2, subject3;
        int maxMarks, minMarks;
        int marks1, marks2, marks3;
    
    public:
        void setData() {
            cout << "Enter roll no and name : ";
            cin >> rollNo >> name;
            cout << "Enter name of subject 1 ,subject 2 and subject 3 : ";
            cin >> subject1 >> subject2 >> subject3;
            cout << "Enter maximum marks: ";
            cin >> maxMarks;
            cout << "Enter minimum marks: ";
            cin >> minMarks;
            cout << "Enter marks obtained in subject 1 ,subject 2, subject 3 : ";
            cin >> marks1 >> marks2 >> marks3;
        }
        void displayData() {
            cout << "Roll No.: " << rollNo << endl;
            cout << "Name: " << name << endl;
            cout << "Subject 1: " << subject1 << endl;
            cout << "Subject 2: " << subject2 << endl;
            cout << "Subject 3: " << subject3 << endl;
            cout << "Maximum marks: " << maxMarks << endl;
            cout << "Minimum marks: " << minMarks << endl;
            cout << "Marks obtained in subject 1: " << marks1 << endl;
            cout << "Marks obtained in subject 2: " << marks2 << endl;
            cout << "Marks obtained in subject 3: " << marks3 << endl;
            
            int totalMarks = marks1 + marks2 + marks3;
            int percentage = (totalMarks * 100) / (3 * maxMarks);
            cout << "Total marks: " << totalMarks << endl;
            cout << "Percentage: " << percentage << "%" << endl;
            
            if (percentage >= 60) {
                cout << "Result: Passed with First Division" << endl;
            } else if (percentage >= 50) {
                cout << "Result: Passed with Second Division" << endl;
            } else if (percentage >= 40) {
                cout << "Result: Passed with Third Division" << endl;
            } else {
                cout << "Result: Failed" << endl;
            }
        }
};

int main() {
    Student s;
    s.setData();
    s.displayData();
    return 0;
}
