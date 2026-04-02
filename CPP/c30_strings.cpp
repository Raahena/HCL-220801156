#include <iostream>
using namespace std;

int main() {
    const char* arr[] = {"Hello", "World", "C++", "Pointers"};

    // Array of pointers
    const char** ptr = arr;

    for (int i = 0; i < 4; i++) {
        cout << "String " << i << ": " << *(ptr + i) << endl;
    }

    return 0;
}