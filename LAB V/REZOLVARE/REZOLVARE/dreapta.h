#ifndef DREAPTA_H
#define DREAPTA_H

#include "punct.h"

class Dreapta {
private:
    Punct p1;
    Punct p2;
public:
    Dreapta(double x1, double y1, double x2, double y2);
    Punct getP1() const;
    void setP1(Punct p);
    Punct getP2() const;
    void setP2(Punct p);
    void afisare() const;
};

#endif // DREAPTA_H
