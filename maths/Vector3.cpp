#include "Vector3.h"
#include <iostream>
#include <string>

Vector3::Vector3(float _x, float _y, float _z) {
    x = _x;
    y = _y;
    z = _z;
}

std::string Vector3::toString() {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")";
}

// ADDITION AND SUBTRACTION -------------------------------------------------------------
Vector3 Vector3::operator+(Vector3 v) {
    return Vector3(x + v.x, y + v.y, z + v.z);
}

void Vector3::operator+=(Vector3 v) {
    x += v.x;
    y += v.y;
    z += v.z;
}

Vector3 Vector3::operator-(Vector3 v) {
    return Vector3(x - v.x, y - v.y, z - v.z);
}

void Vector3::operator-=(Vector3 v) {
    x -= v.x;
    y -= v.y;
    z -= v.z;
}

// SCALAR MULTIPLICATION AND DIVISION ------------------------------------------------------------------------------
Vector3 Vector3::operator*(float s) {
    return Vector3(x * s, y * s, z * s);
}

void Vector3::operator*=(float s) {
    x *= s;
    y *= s;
    z *= s;
}

Vector3 Vector3::operator/(float s) {
    return Vector3(x / s, y / s, z / s);
}

void Vector3::operator/=(float s) {
    x /= s;
    y /= s;
    z /= s;
}

// DOT PRODUCT -------------------------------------------------------------------------------------------------
float Vector3::dot(Vector3 v) {
    return x * v.x + y * v.y + z * v.z;
}