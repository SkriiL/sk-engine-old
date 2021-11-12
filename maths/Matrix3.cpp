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

