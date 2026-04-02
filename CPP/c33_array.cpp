#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    // Dynamic allocation
    Student* students = new Student[n];

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        students[i].input();
    }

    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
    }

    // Free memory
    delete[] students;

    return 0;
}