#include <stdexcept>

class Rectangle {
private:
    double width, height;

public:
    void setWidth(double w) {
        if (w <= 0)
            throw invalid_argument("Width must be > 0");
        width = w;
    }

    void setHeight(double h) {
        if (h <= 0)
            throw invalid_argument("Height must be > 0");
        height = h;
    }

    double area() const {
        return width * height;
    }
};