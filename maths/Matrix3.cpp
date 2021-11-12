#include "Matrix3.h"
#include <string>

using namespace std;

Matrix3::Matrix3() = default;

Matrix3::Matrix3(float m0, float m3, float m6, float m1, float m4, float m7, float m2, float m5, float m8) {
    matrixData[0] = m0;
    matrixData[3] = m3;
    matrixData[6] = m6;

    matrixData[1] = m1;
    matrixData[4] = m4;
    matrixData[7] = m7;

    matrixData[2] = m2;
    matrixData[5] = m5;
    matrixData[8] = m8;
}

string Matrix3::toString() {
    return "[" + to_string(matrixData[0]) + "  " + to_string(matrixData[3]) + "  " + to_string(matrixData[6]) + "\n"
            + " " + to_string(matrixData[1]) + "  " + to_string(matrixData[4]) + "  " + to_string(matrixData[7]) + "\n"
            + " " + to_string(matrixData[2]) + "  " + to_string(matrixData[5]) + "  " + to_string(matrixData[8]) + "]";
}

// ADDITION AND SUBTRACTION --------------------------------------------------------------------------------------------
Matrix3 Matrix3::operator+(Matrix3 m) {
    return {matrixData[0] + m.matrixData[0], matrixData[3] + m.matrixData[3], matrixData[6] + m.matrixData[6],
            matrixData[1] + m.matrixData[1], matrixData[4] + m.matrixData[4], matrixData[7] + m.matrixData[7],
            matrixData[2] + m.matrixData[2], matrixData[5] + m.matrixData[5], matrixData[8] + m.matrixData[8]};
}

void Matrix3::operator+=(Matrix3 m) {
    for (int i = 0; i < 9; i++) {
        matrixData[i] += m.matrixData[i];
    }
}

Matrix3 Matrix3::operator-(Matrix3 m) {
    return {matrixData[0] - m.matrixData[0], matrixData[3] - m.matrixData[3], matrixData[6] - m.matrixData[6],
            matrixData[1] - m.matrixData[1], matrixData[4] - m.matrixData[4], matrixData[7] - m.matrixData[7],
            matrixData[2] - m.matrixData[2], matrixData[5] - m.matrixData[5], matrixData[8] - m.matrixData[8]};
}

void Matrix3::operator-=(Matrix3 m) {
    for (int i = 0; i < 9; i++) {
        matrixData[i] -= m.matrixData[i];
    }
}

// SCALAR MULTIPLICATION AND DIVISION ----------------------------------------------------------------------------------
Matrix3 Matrix3::operator*(float s) {
    return {s * matrixData[0], s * matrixData[3], s * matrixData[6],
            s * matrixData[1], s * matrixData[4], s * matrixData[7],
            s * matrixData[2], s * matrixData[5], s * matrixData[8]};
}

void Matrix3::operator*=(float s) {
    for (float & i : matrixData) {
        i *= s;
    }
}

Matrix3 Matrix3::operator/(float s) {
    return {s / matrixData[0], s / matrixData[3], s / matrixData[6],
            s / matrixData[1], s / matrixData[4], s / matrixData[7],
            s / matrixData[2], s / matrixData[5], s / matrixData[8]};
}

void Matrix3::operator/=(float s) {
    for (float & i : matrixData) {
        i /= s;
    }
}

// MATRIX MULTIPLICATION -----------------------------------------------------------------------------------------------
Matrix3 Matrix3::operator*(Matrix3 m) {
    return {matrixData[0] * m.matrixData[0] + matrixData[3] * m.matrixData[1] + matrixData[6] * m.matrixData[2],
            matrixData[0] * m.matrixData[3] + matrixData[3] * m.matrixData[4] + matrixData[6] * m.matrixData[5],
            matrixData[0] * m.matrixData[6] + matrixData[3] * m.matrixData[7] + matrixData[6] * m.matrixData[8],
            matrixData[1] * m.matrixData[0] + matrixData[4] * m.matrixData[1] + matrixData[7] * m.matrixData[2],
            matrixData[1] * m.matrixData[3] + matrixData[4] * m.matrixData[4] + matrixData[7] * m.matrixData[5],
            matrixData[1] * m.matrixData[6] + matrixData[4] * m.matrixData[7] + matrixData[7] * m.matrixData[8],
            matrixData[2] * m.matrixData[0] + matrixData[5] * m.matrixData[1] + matrixData[8] * m.matrixData[2],
            matrixData[2] * m.matrixData[3] + matrixData[5] * m.matrixData[4] + matrixData[8] * m.matrixData[5],
            matrixData[2] * m.matrixData[6] + matrixData[5] * m.matrixData[7] + matrixData[8] * m.matrixData[8]};
}

void Matrix3::operator*=(Matrix3 m) {
    float newData[9] = {0.0};
    newData[0] = matrixData[0] * m.matrixData[0] + matrixData[3] * m.matrixData[1] + matrixData[6] * m.matrixData[2];
    newData[3] = matrixData[0] * m.matrixData[3] + matrixData[3] * m.matrixData[4] + matrixData[6] * m.matrixData[5];
    newData[6] = matrixData[0] * m.matrixData[6] + matrixData[3] * m.matrixData[7] + matrixData[6] * m.matrixData[8];
    newData[1] = matrixData[1] * m.matrixData[0] + matrixData[4] * m.matrixData[1] + matrixData[7] * m.matrixData[2];
    newData[4] = matrixData[1] * m.matrixData[3] + matrixData[4] * m.matrixData[4] + matrixData[7] * m.matrixData[5];
    newData[7] = matrixData[1] * m.matrixData[6] + matrixData[4] * m.matrixData[7] + matrixData[7] * m.matrixData[8];
    newData[2] = matrixData[2] * m.matrixData[0] + matrixData[5] * m.matrixData[1] + matrixData[8] * m.matrixData[2];
    newData[5] = matrixData[2] * m.matrixData[3] + matrixData[5] * m.matrixData[4] + matrixData[8] * m.matrixData[5];
    newData[8] = matrixData[2] * m.matrixData[6] + matrixData[5] * m.matrixData[7] + matrixData[8] * m.matrixData[8];
    for (int i = 0; i < 9; i++) {
        matrixData[i] = newData[i];
    }
}

// TRANSPOSE -----------------------------------------------------------------------------------------------------------
Matrix3 Matrix3::transpose() {
    return {matrixData[0], matrixData[1], matrixData[2],
            matrixData[3], matrixData[4], matrixData[5],
            matrixData[6], matrixData[7], matrixData[8]};
}
