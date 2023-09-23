// LABORATOR X
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"

class Circle : public Point {
public:
    Circle(double x = 0, double y = 0, double radius = 1);
    double area() const override; // Suprascrierea funcției area
    ~Circle() override;
protected:
    double radius;
};

#endif

