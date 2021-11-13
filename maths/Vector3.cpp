#include "Vector3.h"
#include <string>
#include <cmath>

using namespace std;

Vector3::Vector3(float _x, float _y, float _z) {
    x = _x;
    y = _y;
    z = _z;
}

string Vector3::toString() {
    return "(" + to_string(x) + ", " + to_string(y) + ", " + to_string(z) + ")";
}

// ADDITION AND SUBTRACTION -------------------------------------------------------------
Vector3 Vector3::operator+(Vector3 v) {
    return {x + x, y + y, z + z};
}

void Vector3::operator+=(Vector3 v) {
    x += v.x;
    y += v.y;
    z += v.z;
}

Vector3 Vector3::operator-(Vector3 v) {
    return {x - v.x, y - v.y, z - v.z};
}

void Vector3::operator-=(Vector3 v) {
    x -= v.x;
    y -= v.y;
    z -= v.z;
}

// SCALAR MULTIPLICATION AND DIVISION ------------------------------------------------------------------------------
Vector3 Vector3::operator*(float s) {
    return {x * s, y * s, z * s};
}

void Vector3::operator*=(float s) {
    x *= s;
    y *= s;
    z *= s;
}

Vector3 Vector3::operator/(float s) {
    return {x / s, y / s, z / s};
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

// CROSS PRODUCT ----------------------------------------------------------------------------------------------
Vector3 Vector3::operator*(Vector3 v) {
    return {y * v.z - z * v.y, z * v.x - x * v.z, x * v.y - y * v.x };
}

void Vector3::operator*=(Vector3 v) {
    x = y * v.z - z * v.y;
    y = z * v.x - x * v.z;
    z = x * v.y - y * v.x;
}

// MAGNITUDE AND NORMALIZATION -------------------------------------------------------------------------------
float Vector3::magnitude() {
    return sqrt(x * x + y * y + z * z);
}

Vector3 Vector3::normalize() {
    return *this / magnitude();
}
