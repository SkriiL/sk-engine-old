#include "../maths/Vector3.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool testVector3() {
    bool success = true;
    Vector3 a(1, 2, 3);
    // ADDITION AND SUBTRACTION
    a += Vector3(0.5, 0.5, 0.5);
    if (a.x != 1.5 || a.y != 2.5 || a.z != 3.5) {
        cout << "ERROR: Vector 3 Addition Test - Expected " + Vector3(1.5, 2.5, 3.5).toString() + " - Got " + a.toString() << endl;
        success = false;
    }
    a -= Vector3(1.5, -0.5, -0.5);
    if (a.x != 0 || a.y != 3 || a.z != 4) {
        cout << "ERROR: Vector 3 Subtraction Test - Expected " + Vector3(0, 3, 4).toString() + " - Got " + a.toString() << endl;
        success = false;
    }
    // SCALAR MULTIPLICATION AND DIVISION
    a *= 2;
    if (a.x != 0 || a.y != 6 || a.z != 8) {
        cout << "ERROR: Vector 3 Scalar Multiplication Test - Expected " + Vector3(0, 6, 8).toString() + " - Got " + a.toString() << endl;
        success = false;
    }
    a /= 2;
    if (a.x != 0 || a.y != 3 || a.z != 4) {
        cout << "ERROR: Vector 3 Scalar Division Test - Expected " + Vector3(0, 3, 4).toString() + " - Got " + a.toString() << endl;
        success = false;
    }
    // DOT PRODUCT
    float d = a.dot(Vector3(0, 3, 4));
    if (d != 25) {
        cout << "ERROR: Vector 3 Dot Product Test - Expected 25 - Got " + to_string(d) << endl;
        success = false;
    }
    // CROSS PRODUCT
    Vector3 b = a * Vector3(1, 1, 1);
    if (b.x != -1 || b.y != 4 || b.z != -3) {
        cout << "ERROR: Vector 3 Cross Product Test - Expected " + Vector3(-1, 4, -3).toString() + " - Got " + b.toString() << endl;
        success = false;
    }
    // MAGNITUDE AND NORMALIZATION
    float m = a.magnitude();
    if (m != 5) {
        cout << "ERROR: Vector 3 Magnitude Test - Expected 25 - Got " + to_string(m) << endl;
        success = false;
    }
    a = a.normalize();
    if (a.x - 0 >= 0.00001 || a.y - (3. / 5.) >= 0.00001 || a.z - (4. / 5.) >= 0.00001) {
        cout << "ERROR: Vector 3 Cross Product Test - Expected " + Vector3(0, 3./5., 4./5.).toString() + " - Got " + a.toString() << endl;
        success = false;
    }
    return success;
}

bool testMaths() {
    return testVector3();
}