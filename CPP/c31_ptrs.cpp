#include <iostream>
using namespace std;

int main() {
    int x = 10;

    int* ptr = &x;     // pointer to x
    int** pptr = &ptr; // pointer to pointer

    cout << "Before: " << x << endl;

    **pptr = 50; // modify using pointer to pointer

    cout << "After: " << x << endl;

    return 0;
}