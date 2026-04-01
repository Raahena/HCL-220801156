#include <iostream>
#include <cmath>
using namespace std;

// Point class
class Point {
public:
    double x, y;

    Point(double xVal = 0, double yVal = 0) {
        x = xVal;
        y = yVal;
    }
};

// Distance using 4 coordinates
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Distance between two Point objects
double distance(const Point& p1, const Point& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

// Distance from origin
double distance(const Point& p) {
    return sqrt(pow(p.x, 2) + pow(p.y, 2));
}
int main() {

    // Using raw coordinates
    cout << "Distance (coordinates): "
         << distance(1, 2, 4, 6) << endl;

    // Using Point objects
    Point p1(1, 2), p2(4, 6);
    cout << "Distance (Point objects): "
         << distance(p1, p2) << endl;

    // Distance from origin
    Point p3(3, 4);
    cout << "Distance (from origin): "
         << distance(p3) << endl;

    return 0;
}