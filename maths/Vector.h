#ifndef SK_ENGINE_VECTOR_H
#define SK_ENGINE_VECTOR_H


class Vector {
public:
    float x, y, z;
    Vector(float _x, float _y, float _z);

    void print();

    Vector operator+(Vector v);
    void operator+=(Vector v);
    Vector operator-(Vector v);
    void operator-=(Vector v);
};


#endif //SK_ENGINE_VECTOR_H
