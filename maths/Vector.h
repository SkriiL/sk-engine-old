#ifndef SK_ENGINE_VECTOR_H
#define SK_ENGINE_VECTOR_H
#include <string>


class Vector {
public:
    float x, y, z;
    Vector(float _x, float _y, float _z);

    std::string toString();
    // ADDITION AND SUBTRACTION ------------------------------------------------------------------------------
    Vector operator+(Vector v);
    void operator+=(Vector v);
    Vector operator-(Vector v);
    void operator-=(Vector v);
    // SCALAR MULTIPLICATION AND DIVISION --------------------------------------------------------------------
    Vector operator*(float s);
    void operator*=(float s);
    Vector operator/(float s);
    void operator/=(float s);
};


#endif //SK_ENGINE_VECTOR_H
