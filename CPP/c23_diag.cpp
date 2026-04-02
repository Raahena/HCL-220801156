//2.	Overload printDiag to accept int, double, std::string, and std::vector<int>. Ensure the vector overload is chosen over the generic template (if added) by using more specific signatures.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Specific overloads
void printDiag(int x) {
    cout << "Integer: " << x << endl;
}

void printDiag(double x) {
    cout << "Double: " << x << endl;
}

void printDiag(const string& s) {
    cout << "String: " << s << endl;
}

// More specific overload for vector<int>
void printDiag(const vector<int>& v) {
    cout << "Vector<int>: ";
    for (int val : v) cout << val << " ";
    cout << endl;
}

// Generic template (fallback)
template <typename T>
void printDiag(const T& val) {
    cout << "Generic type" << endl;
}

int main() {
    printDiag(10);                 // int
    printDiag(3.14);               // double
    printDiag(string("Hello"));    // string

    vector<int> v = {1, 2, 3};
    printDiag(v);                  // calls vector<int> overload (NOT template)

    char c = 'A';
    printDiag(c);                  // goes to template

    return 0;
}