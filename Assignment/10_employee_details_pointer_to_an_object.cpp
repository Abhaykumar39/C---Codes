#include <iostream>
using namespace std;
class Employee {
    private:
        string name;
        int id;
        int salary;
    
    public:
        void setData() {
            cout << "Enter employee name: ";
            getline(cin, name);
            cout << "Enter employee ID: ";
            cin >> id;
            cout << "Enter employee salary: ";
            cin >> salary;
        }
    
        void displayData() {
            cout << name << endl;
            cout << id << endl;
            cout << salary << endl;
        }
};

int main() {
    Employee *ptr;
    ptr = new Employee; 
    
    ptr->setData();  
    ptr->displayData();
}
