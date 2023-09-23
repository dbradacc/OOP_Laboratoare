// LABORATOR X
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#include "Cylinder.h"
#include <cmath>

Cylinder::Cylinder(double x, double y, double radius, double height)
    : Circle(x, y, radius), height(height) {}

double Cylinder::area() const {
    return 2 * 3.14159 * radius * height + 2 * 3.14159 * radius * radius;
}

Cylinder::~Cylinder() {}

