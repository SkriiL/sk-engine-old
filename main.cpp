#include <iostream>
#include "maths/Vector.h"

int main() {
    Vector a(1.5, 2.5, 0);
    Vector b(0.5, 1.5, -1);
    a -= b;
    std::cout << a.toString() << std::endl;
    a *= 5;
    std::cout << a.toString() << std::endl;
    a /= 2.5;
    std::cout << a.toString() << std::endl;
    return 0;
}
