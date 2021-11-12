#include "Vector2.h"


Vector2::Vector2(float x, float y) : Vector3(x, y, 0) {}

std::string Vector2::toString() {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}