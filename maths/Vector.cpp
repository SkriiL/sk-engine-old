#include "Vector.h"
#include <iostream>
#include <string>

Vector::Vector(float _x, float _y, float _z) {
    x = _x;
    y = _y;
    z = _z;
}

std::string Vector::toString() {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")";
}

// ADDITION AND SUBTRACTION -------------------------------------------------------------
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

// SCALAR MULTIPLICATION AND DIVISION ------------------------------------------------------------------------------
Vector Vector::operator*(float s) {
    return Vector(x * s, y * s, z * s);
}

void Vector::operator*=(float s) {
    x *= s;
    y *= s;
    z *= s;
}

Vector Vector::operator/(float s) {
    return Vector(x / s, y / s, z / s);
}

void Vector::operator/=(float s) {
    x /= s;
    y /= s;
    z /= s;
}