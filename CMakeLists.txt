cmake_minimum_required(VERSION 3.20)
project(sk_engine)

set(CMAKE_CXX_STANDARD 23)

add_executable(sk_engine main.cpp maths/Vector3.cpp maths/Vector3.h maths/Vector2.cpp maths/Vector2.h maths/Matrix3.cpp maths/Matrix3.h)
