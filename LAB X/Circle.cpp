// LABORATOR X
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#include "Circle.h"
#include <cmath>

Circle::Circle(double x, double y, double radius) : Point(x, y), radius(radius) {}

double Circle::area() const {
    return 3.14159 * radius * radius;
}

Circle::~Circle() {}

