//Exercise 1
class EquiTriangle {
public:
    EquiTriangle() = delete;
    EquiTriangle(long sidelength);

    long perimeter_var() const;
    float area_var() const;

    void setLength(long sidelength);
    long perimeter();
    float area();

private:
    long mLength;
    long mPerimeter;
    float mArea;
};

#include <cmath>
#include <iostream>
EquiTriangle::EquiTriangle(long sidelength)
    : mLength{sidelength} {}

long EquiTriangle::perimeter() {
    this->mPerimeter = mLength * 3;
    return mPerimeter;
}

float EquiTriangle::area() {
    this->mArea = (sqrt(3)/4) * (mLength*mLength);
    return mArea;
}

// Use this main to test your code.
#include <iostream>
#include <iomanip>
int main() {
    // This causes floating point numbers to be printed to 2 decimal places. Do not remove.
    std::cout << std::fixed << std::setprecision(2);

    EquiTriangle triangle(1431655765);
    std::cout << "Perimeter: " << triangle.perimeter() << std::endl;
    std::cout << "Area: " << triangle.area() << std::endl;
}
