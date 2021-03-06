#ifndef SK_ENGINE_MATRIX3_H
#define SK_ENGINE_MATRIX3_H
#include <string>
#include "Vector3.h"

using namespace std;

class Matrix3 {
    /* COLUMN MAJOR
     * 0 3 6
     * 1 4 7
     * 2 5 8 */
public:
    float matrixData[9] = {0.0};
    Matrix3();
    Matrix3(float m0, float m3, float m6, float m1, float m4, float m7, float m2, float m5, float m8);
    string toString();
    // IDENTITY --------------------------------------------------------------------------------------------------------
    static Matrix3 identity() {
        return {1, 0, 0, 0, 1, 0, 0, 0, 1};
    }
    // ADDITION AND SUBTRACTION ----------------------------------------------------------------------------------------
    Matrix3 operator+(Matrix3 m);
    void operator+=(Matrix3 m);
    Matrix3 operator-(Matrix3 m);
    void operator-=(Matrix3 m);
    // SCALAR MULTIPLICATION AND DIVISION ------------------------------------------------------------------------------
    Matrix3 operator*(float s);
    void operator*=(float s);
    Matrix3 operator/(float s);
    void operator/=(float s);
    // MATRIX MULTIPLICATION -------------------------------------------------------------------------------------------
    Matrix3 operator*(Matrix3 m);
    void operator*=(Matrix3 m);
    // TRANSPOSE -------------------------------------------------------------------------------------------------------
    Matrix3 transpose();
    // INVERSE MATRIX --------------------------------------------------------------------------------------------------
    float determinant();
    Matrix3 adjugate();
    Matrix3 inverse();
    // VECTOR TRANSFORMATION -------------------------------------------------------------------------------------------
    Vector3 operator*(Vector3 v);
};


#endif //SK_ENGINE_MATRIX3_H
