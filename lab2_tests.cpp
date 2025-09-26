//Exercise 1
class EquiTriangle {
public:
    EquiTriangle() = delete;
    EquiTriangle(unsigned int sidelength);

    unsigned int perimeter() const;
    float area() const;

    void setLength(unsigned int sidelength);
    unsigned int printPerimeter();
    float printArea();

private:
    unsigned int mLength;
    unsigned int mPerimeter;
    float mArea;
};

#include <cmath>
#include <iostream>

EquiTriangle::EquiTriangle(unsigned int sidelength)
    : mLength{sidelength} {}

unsigned int EquiTriangle::printPerimeter() {
    this->mPerimeter = mLength * 3;
    return mPerimeter;
}

float EquiTriangle::printArea() {
    this->mArea = (sqrt(3)/4) * (mLength*mLength);
    return mArea;
}

#include <iomanip>


int main() {
    // This causes floating point numbers to be printed to 2 decimal places. Do not remove.
    std::cout << std::fixed << std::setprecision(2);
    EquiTriangle triangle(1);
    std::cout << "Perimeter: " << triangle.printPerimeter() << std::endl;
    std::cout << "Area: " << triangle.printArea() << std::endl;
}
