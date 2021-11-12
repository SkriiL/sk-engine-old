#ifndef SK_ENGINE_VECTOR2_H
#define SK_ENGINE_VECTOR2_H
#include "Vector3.h"
#include <string>

using namespace std;

class Vector2 : public Vector3 {
public:
    Vector2(float x, float y);
    string toString();
};


#endif //SK_ENGINE_VECTOR2_H
