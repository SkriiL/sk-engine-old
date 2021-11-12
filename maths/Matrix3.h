#ifndef SK_ENGINE_MATRIX3_H
#define SK_ENGINE_MATRIX3_H
#include <string>

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
};


#endif //SK_ENGINE_MATRIX3_H
