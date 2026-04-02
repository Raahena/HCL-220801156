#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) : value(v) {}

    // Prefix ++c
    Counter& operator++() {
        ++value;
        return *this; // return reference
    }

    // Postfix c++
    Counter operator++(int) {
        Counter temp = *this; // store old value
        value++;
        return temp; // return old copy
    }

    int get() const {
        return value;
    }
};

int main() {
    Counter c(5);

    int x = c++;  
    cout << "x = " << x << ", c = " << c.get() << endl;

    int y = ++c; 
    cout << "y = " << y << ", c = " << c.get() << endl;

    return 0;
}