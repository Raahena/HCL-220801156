#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;

int main() {
    ifstream file("numbers.txt");

    try {
        if (!file.is_open())
            throw runtime_error("File could not be opened");

        int a, b;

        while (file >> a >> b) {
            if (b == 0)
                throw runtime_error("Division by zero error");

            cout << a << " / " << b << " = " << (a / b) << endl;
        }

        file.close();
    }
    catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}