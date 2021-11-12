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

