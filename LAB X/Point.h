// LABORATOR X
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point(double x = 0, double y = 0);
    virtual double area() const = 0; // Funcție virtuală pură
    virtual ~Point(); // Destructor virtual
protected:
    double x;
    double y;
};

#endif

