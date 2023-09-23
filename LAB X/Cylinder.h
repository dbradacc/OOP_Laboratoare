// LABORATOR X
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#ifndef CYLINDER_H
#define CYLINDER_H
#include "Circle.h"

class Cylinder : public Circle {
public:
    Cylinder(double x = 0, double y = 0, double radius = 1, double height = 1);
    double area() const override; // Suprascrierea funcției area
    ~Cylinder() override;
protected:
    double height;
};

#endif

