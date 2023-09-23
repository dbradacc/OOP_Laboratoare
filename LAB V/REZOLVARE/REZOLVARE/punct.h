#ifndef PUNCT_H
#define PUNCT_H

#include <iostream>

class Punct {
public:
    // Constructor implicit
    Punct();

    // Constructor explicit
    Punct(double x, double y);

    // Getteri si setteri
    double getX() const;
    void setX(double x);
    double getY() const;
    void setY(double y);

    // Afisare coordonatele punctului
    void afisare() const;

private:
    double x, y;
};

#endif
