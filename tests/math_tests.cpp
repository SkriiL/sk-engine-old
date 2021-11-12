#include "../maths/Vector3.h"
#include "../maths/Matrix3.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// TEST VECTOR3 --------------------------------------------------------------------------------------------------------
bool testVector3() {
    bool success = true;
    Vector3 a(1, 2, 3);
    // ADDITION AND SUBTRACTION
    a += Vector3(0.5, 0.5, 0.5);
    if (a.x != 1.5 || a.y != 2.5 || a.z != 3.5) {
        cout << "ERROR: Vector3 Addition Test - Expected " + Vector3(1.5, 2.5, 3.5).toString() + " - Got " + a.toString() << endl;
        success = false;
    }
    a -= Vector3(1.5, -0.5, -0.5);
    if (a.x != 0 || a.y != 3 || a.z != 4) {
        cout << "ERROR: Vector3 Subtraction Test - Expected " + Vector3(0, 3, 4).toString() + " - Got " + a.toString() << endl;
        success = false;
    }
    // SCALAR MULTIPLICATION AND DIVISION
    a *= 2;
    if (a.x != 0 || a.y != 6 || a.z != 8) {
        cout << "ERROR: Vector3 Scalar Multiplication Test - Expected " + Vector3(0, 6, 8).toString() + " - Got " + a.toString() << endl;
        success = false;
    }
    a /= 2;
    if (a.x != 0 || a.y != 3 || a.z != 4) {
        cout << "ERROR: Vector3 Scalar Division Test - Expected " + Vector3(0, 3, 4).toString() + " - Got " + a.toString() << endl;
        success = false;
    }
    // DOT PRODUCT
    float d = a.dot(Vector3(0, 3, 4));
    if (d != 25) {
        cout << "ERROR: Vector3 Dot Product Test - Expected 25 - Got " + to_string(d) << endl;
        success = false;
    }
    // CROSS PRODUCT
    Vector3 b = a * Vector3(1, 1, 1);
    if (b.x != -1 || b.y != 4 || b.z != -3) {
        cout << "ERROR: Vector3 Cross Product Test - Expected " + Vector3(-1, 4, -3).toString() + " - Got " + b.toString() << endl;
        success = false;
    }
    // MAGNITUDE AND NORMALIZATION
    float m = a.magnitude();
    if (m != 5) {
        cout << "ERROR: Vector3 Magnitude Test - Expected 25 - Got " + to_string(m) << endl;
        success = false;
    }
    a = a.normalize();
    if (a.x - 0 >= 0.00001 || a.y - (3. / 5.) >= 0.00001 || a.z - (4. / 5.) >= 0.00001) {
        cout << "ERROR: Vector3 Cross Product Test - Expected " + Vector3(0, 3./5., 4./5.).toString() + " - Got " + a.toString() << endl;
        success = false;
    }
    return success;
}

// TEST MATRIX3 --------------------------------------------------------------------------------------------------------
bool testMatrix3() {
    bool success = true;
    Matrix3 m = Matrix3::identity();
    // ADDITION AND SUBTRACTION
    m += Matrix3(0, 1, 1, 1, 0, 1, 1, 1, 0);
    for (int i = 0; i < 9; i++) {
        if (m.matrixData[i] != 1) {
            cout << "ERROR: Matrix3 Addition Test at m" + to_string(i) + " - Expected 1 - Got " + to_string(m.matrixData[i]) << endl;
            success = false;
        }
    }
    m -= Matrix3(0, 1, 1, 1, 0, 1, 1, 1, 0);
    Matrix3 exp = Matrix3::identity();
    for (int i = 0; i < 9; i++) {
        if (m.matrixData[i] != exp.matrixData[i]) {
            cout << "ERROR: Matrix3 Subtraction Test at m" + to_string(i) + " - Expected " + to_string(exp.matrixData[i]) + " - Got " + to_string(m.matrixData[i]) << endl;
            success = false;
        }
    }
    m *= 3;
    exp = Matrix3(3, 0, 0, 0, 3, 0, 0, 0, 3);
    for (int i = 0; i < 9; i++) {
        if (m.matrixData[i] != exp.matrixData[i]) {
            cout << "ERROR: Matrix3 Scalar Multiplication Test at m" + to_string(i) + " - Expected " + to_string(exp.matrixData[i]) + " - Got " + to_string(m.matrixData[i]) << endl;
            success = false;
        }
    }
    m /= 3;
    exp = Matrix3::identity();
    for (int i = 0; i < 9; i++) {
        if (m.matrixData[i] != exp.matrixData[i]) {
            cout << "ERROR: Matrix3 Scalar Division Test at m" + to_string(i) + " - Expected " + to_string(exp.matrixData[i]) + " - Got " + to_string(m.matrixData[i]) << endl;
            success = false;
        }
    }
    m = Matrix3(1, 1, 1, 1, 1, 1, 1, 1, 1);
    m *= Matrix3(1, 1, 2, 1, 2, 1, 2, 1, 1);
    exp = Matrix3(4, 4, 4, 4, 4, 4, 4, 4, 4);
    for (int i = 0; i < 9; i++) {
        if (m.matrixData[i] != exp.matrixData[i]) {
            cout << "ERROR: Matrix3 Multiplication Test at m" + to_string(i) + " - Expected " + to_string(exp.matrixData[i]) + " - Got " + to_string(m.matrixData[i]) << endl;
            success = false;
        }
    }
    // TRANSPOSE
    m = Matrix3(1, 2, 3, 4, 5, 6, 7, 8, 9);
    m = m.transpose();
    exp = Matrix3(1, 4, 7, 2, 5, 8, 3, 6, 9);
    for (int i = 0; i < 9; i++) {
        if (m.matrixData[i] != exp.matrixData[i]) {
            cout << "ERROR: Matrix3 Transposition Test at m" + to_string(i) + " - Expected " + to_string(exp.matrixData[i]) + " - Got " + to_string(m.matrixData[i]) << endl;
            success = false;
        }
    }
    return success;
}

bool testMaths() {
    return testVector3() && testMatrix3();
}