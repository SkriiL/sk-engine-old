#ifndef SK_ENGINE_Vector3_H
#define SK_ENGINE_Vector3_H
#include <string>

using namespace std;

class Vector3 {
public:
    float x, y, z;
    Vector3(float _x, float _y, float _z);
    virtual string toString();
    // ADDITION AND SUBTRACTION ------------------------------------------------------------------------------
    Vector3 operator+(Vector3 v);
    void operator+=(Vector3 v);
    Vector3 operator-(Vector3 v);
    void operator-=(Vector3 v);
    // SCALAR MULTIPLICATION AND DIVISION --------------------------------------------------------------------
    Vector3 operator*(float s);
    void operator*=(float s);
    Vector3 operator/(float s);
    void operator/=(float s);
    // DOT PRODUCT -------------------------------------------------------------------------------------------
    float dot(Vector3 v);
    // CROSS PRODUCT -----------------------------------------------------------------------------------------
    Vector3 operator*(Vector3 v);
    void operator*=(Vector3 v);
    // MAGNITUDE AND NORMALIZATION ---------------------------------------------------------------------------
    float magnitude();
    Vector3 normalize();
};


#endif //SK_ENGINE_Vector3_H
