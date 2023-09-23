// LABORATOR X
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"

using namespace std;

int main() {
    Circle *circlePtr = new Circle(0, 0, 5); // Pointer către Circle
    Cylinder *cylinderPtr = new Cylinder(0, 0, 5, 10); // Pointer către Cylinder

    // Demonstrarea funcționalității polimorfice
    cout << "Aria cercului: " << circlePtr->area() << endl;
    cout << "Aria cilindrului: " << cylinderPtr->area() << endl;

    delete circlePtr;
    delete cylinderPtr;

    return 0;
}
