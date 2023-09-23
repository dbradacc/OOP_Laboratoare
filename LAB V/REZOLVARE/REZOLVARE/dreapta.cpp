#include "dreapta.h"
#include <iostream>

using namespace std;

Dreapta::Dreapta(double x1, double y1, double x2, double y2) : p1(x1, y1), p2(x2, y2) {}

Punct Dreapta::getP1() const {
    return p1;
}

void Dreapta::setP1(Punct p) {
    p1 = p;
}

Punct Dreapta::getP2() const {
    return p2;
}

void Dreapta::setP2(Punct p) {
    p2 = p;
}

void Dreapta::afisare() const {
    cout << "Coordonatele punctului 1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
    cout << "Coordonatele punctului 2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;
}
