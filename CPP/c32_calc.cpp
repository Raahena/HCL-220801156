#include <iostream>
using namespace std;

// Functions
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) {
    if (b == 0) {
        cout << "Division by zero error\n";
        return 0;
    }
    return a / b;
}

int main() {
    int choice, a, b;

    // Function pointer
    int (*operation)(int, int);

    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (choice) {
        case 1: operation = add; break;
        case 2: operation = sub; break;
        case 3: operation = mul; break;
        case 4: operation = divide; break;
        default:
            cout << "Invalid choice\n";
            return 0;
    }

    cout << "Result: " << operation(a, b) << endl;

    return 0;
}