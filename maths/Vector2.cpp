#include "Vector2.h"

using namespace std;

Vector2::Vector2(float x, float y) : Vector3(x, y, 0) {}

string Vector2::toString() {
    return "(" + to_string(x) + ", " + to_string(y) + ")";
}