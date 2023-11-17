#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// Employee class definition
class Employee {
public:
    string Emp_nm;
    string Dep;
    int Eid;
    int Age;
    double Sal;
};

// Function to insert a new employee record
void Insert(const Employee& emp) {
    ofstream file("d:\\emp.dat", ios::app | ios::binary);

    if (!file) {
        cout << "Error opening file for writing!" << endl;
        return;
    }

    file.write(reinterpret_cast<const char*>(&emp), sizeof(Employee));
    file.close();
}

// Function to display all employee records
void Display() {
    ifstream file("d:\\emp.dat", ios::binary);

    if (!file) {
        cout << "Error opening file for reading!" << endl;
        return;
    }

    Employee emp;
    while (file.read(reinterpret_cast<char*>(&emp), sizeof(Employee))) {
        cout << "Employee ID: " << emp.Eid << endl;
        cout << "Name: " << emp.Emp_nm << endl;
        cout << "Department: " << emp.Dep << endl;
        cout << "Age: " << emp.Age << endl;
        cout << "Salary: " << emp.Sal << endl << endl;
    }

    file.close();
}

// Function to search for an employee record
void Search(int employeeId) {
    ifstream file("d:\\emp.dat", ios::binary);

    if (!file) {
        cout << "Error opening file for reading!" << endl;
        return;
    }

    Employee emp;
    bool found = false;
    while (file.read(reinterpret_cast<char*>(&emp), sizeof(Employee))) {
        if (emp.Eid == employeeId) {
            cout << "Employee found!" << endl;
            cout << "Employee ID: " << emp.Eid << endl;
            cout << "Name: " << emp.Emp_nm << endl;
            cout << "Department: " << emp.Dep << endl;
            cout << "Age: " << emp.Age << endl;
            cout << "Salary: " << emp.Sal << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Employee not found!" << endl;
    }

    file.close();
}

// Function to delete an employee record
void Delete(int employeeId) {
    ifstream inputFile("d:\\emp.dat", ios::binary);
    if (!inputFile) {
        cout << "Error opening file for reading!" << endl;
        return;
    }

    ofstream outputFile("d:\\temp.dat", ios::binary);
    if (!outputFile) {
        cout << "Error opening temporary file for writing!" << endl;
        return;
    }

    Employee emp;
    bool found = false;
    while (inputFile.read(reinterpret_cast<char*>(&emp), sizeof(Employee))) {
        if (emp.Eid == employeeId) {
            found = true;
            continue;
        }
        outputFile.write(reinterpret_cast<const char*>(&emp), sizeof(Employee));
    }

    inputFile.close();
    outputFile.close();

    if (found) {
        remove("d:\\emp.dat");
        rename("d:\\temp.dat", "d:\\emp.dat");
        cout << "Employee record deleted successfully!" << endl;
    } else {
        cout << "Employee not found!" << endl;
    }
}

int main() {
    int choice;
    Employee emp;

    do {
        cout << "***** Employee Management System *****" << endl;
        cout << "1. Insert employee record" << endl;
        cout << "2. Display all employee records" << endl;
        cout << "3. Search employee record" << endl;
        cout << "4. Delete employee record" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter employee details:" << endl;
                cout << "Employee ID: ";
                cin >> emp.Eid;
                cout << "Name: ";
                cin.ignore();
                getline(cin, emp.Emp_nm);
                cout << "Department: ";
                getline(cin, emp.Dep);
                cout << "Age: ";
                cin >> emp.Age;
                cout << "Salary: ";
                cin >> emp.Sal;

                Insert(emp);
                cout << "Employee record inserted successfully!" << endl;
                break;
            }
            case 2: {
                cout << "Employee records:" << endl;
                Display();
                break;
            }
            case 3: {
                int employeeId;
                cout << "Enter employee ID to search: ";
                cin >> employeeId;
                Search(employeeId);
                break;
            }
            case 4: {
                int employeeId;
                cout << "Enter employee ID to delete: ";
                cin >> employeeId;
                Delete(employeeId);
                break;
            }
            case 5: {
                cout << "Exiting..." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }

        cout << endl;
    } while (choice != 5);

    return 0;
}
