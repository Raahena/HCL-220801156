#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;
    file.open("data.txt", ios::in);

    if (!file.is_open()) {
        cout << "Error opening file\n";
        return 1;
    }

    string line;
    int count = 0;

    while (getline(file, line)) {
        count++;
    }

    file.close();

    // Append result
    file.open("data.txt", ios::app);

    if (file.is_open()) {
        file << "\nTotal Lines: " << count << endl;
        file.close();
        cout << "Line count appended successfully\n";
    } else {
        cout << "Error reopening file\n";
    }

    return 0;
}