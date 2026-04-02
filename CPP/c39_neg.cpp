#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    try {
        if (num < 0)
            throw num;

        cout << "Valid number: " << num << endl;
    }
    catch (int n) {
        cout << "Error: Negative number entered (" << n << ")" << endl;
    }

    return 0;
}