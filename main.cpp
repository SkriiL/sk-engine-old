#include <iostream>
#include "maths/Vector3.h"

int main() {
    Vector3 a(1.5, 2.5, 0);
    Vector3 b(0.5, 1.5, -1);
    a -= b;
    std::cout << a.toString() << std::endl;
    a *= 5;
    std::cout << a.toString() << std::endl;
    a /= 2.5;
    std::cout << a.toString() << std::endl;
    std::cout << a.dot(b) << std::endl;
    b = a * b;
    std::cout << b.toString() << std::endl;
    return 0;
}
