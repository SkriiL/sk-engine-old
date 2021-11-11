#include "Vector.h"
#include <iostream>

Vector::Vector(float _x, float _y, float _z) {
    x = _x;
    y = _y;
    z = _z;
}

void Vector::print() {
    std::cout << "(" << x << ", " << y << ", " << z << ")";
}