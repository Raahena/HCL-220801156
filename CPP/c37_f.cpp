#include <iostream>
#include <fstream>
using namespace std;

class Employee {
public:
    int id;
    char name[50];
    float salary;

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Salary: " << salary << endl;
    }
};

int main() {
    ofstream outFile("employee.dat", ios::binary);

    if (!outFile.is_open()) {
        cout << "Error opening file for writing\n";
        return 1;
    }

    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp;

    // Write objects
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        emp.input();
        outFile.write((char*)&emp, sizeof(emp));
    }

    outFile.close();

    // Read objects
    ifstream inFile("employee.dat", ios::binary);

    if (!inFile.is_open()) {
        cout << "Error opening file for reading\n";
        return 1;
    }

    cout << "\n--- Employee Records ---\n";

    while (inFile.read((char*)&emp, sizeof(emp))) {
        emp.display();
    }

    inFile.close();

    return 0;
}