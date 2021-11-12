#ifndef SK_ENGINE_VECTOR2_H
#define SK_ENGINE_VECTOR2_H
#include "Vector3.h"
#include <string>


class Vector2 : public Vector3 {
public:
    Vector2(float x, float y);
    std::string toString();
};


#endif //SK_ENGINE_VECTOR2_H
