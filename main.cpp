#include <iostream>

#include "maths/Vector3.h"
#include "maths/Vector2.h"
#include "maths/Matrix3.h"

#include "tests/math_tests.h"

using namespace std;

int main() {
    bool tests = testMaths();
    if (tests) {
        cout << "All tests successful!" << endl;
    }
    return 0;
}
