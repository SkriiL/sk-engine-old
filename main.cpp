#include <iostream>
#include "maths/Vector3.h"
#include "maths/Vector2.h"
#include "maths/Matrix3.h"

using namespace std;

int main() {
    Vector3 a(1.5, 2.5, 0);
    Vector3 b(0.5, 1.5, -1);
    a -= b;
    cout << a.toString() << endl;
    a *= 5;
    cout << a.toString() << endl;
    a /= 2.5;
    cout << a.toString() << endl;
    cout << a.dot(b) << endl;
    b = a * b;
    cout << b.toString() << endl;
    b = b.normalize();
    cout << b.toString() << endl;
    cout << b.magnitude() << endl;
    Vector2 c(4, 3);
    cout << c.toString() << endl;
    cout << c.magnitude() << endl;;
    Matrix3 m(1, 0, 0, 0, 1, 0, 0, 0, 1);
    cout << m.toString() << endl;
    Matrix3 n;
    cout << n.toString() << endl;
    return 0;
}
