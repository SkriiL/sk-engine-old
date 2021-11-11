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


Vector Vector::operator+(Vector v) {
    return Vector(x + v.x, y + v.y, z + v.z);
}

void Vector::operator+=(Vector v) {
    x += v.x;
    y += v.y;
    z += v.z;
}

Vector Vector::operator-(Vector v) {
    return Vector(x - v.x, y - v.y, z - v.z);
}

void Vector::operator-=(Vector v) {
    x -= v.x;
    y -= v.y;
    z -= v.z;
}
