#include <iostream>
#include <fstream>
using namespace std;

void openFile() {
    ifstream file("data.txt");

    if (!file.is_open())
        throw string("File cannot be opened");

    cout << "File opened successfully\n";
    file.close();
}

int main() {
    try {
        openFile();
    }
    catch (string msg) {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}