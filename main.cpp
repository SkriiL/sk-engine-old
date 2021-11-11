#include <iostream>
#include "maths/Vector.h"

int main() {
    Vector a(1.5, 2.5, 0);
    Vector b(0.5, 1.5, -1);
    a -= b;
    a.print();
    return 0;
}
