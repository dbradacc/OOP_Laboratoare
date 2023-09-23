#include "punct.h"
#include <iostream>

class Punct {
public:
    // Constructor implicit
    Punct() : x(0), y(0) {}

    // Constructor explicit
    Punct(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    // Funcții getter și setter pentru x și y
    double getX() const { return x; }
    double getY() const { return y; }
    void setX(double newX) { x = newX; }
    void setY(double newY) { y = newY; }

private:
    double x;
    double y;
};
