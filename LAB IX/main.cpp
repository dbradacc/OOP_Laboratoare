// LABORATOR IX
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#include <iostream>
#include "Time.h"
#include "DateTime.h"

using namespace std;

int main() {
    // crearea obiectului din clasa Time
    Time t(11, 59, 59);

    // afisarea obiectului creat din clasa Time folosind operatorul <<
    cout << "Ora este: " << t << endl;

    // crearea obiectului din clasa DateTime
    DateTime dt(2023, 4, 6, 11, 59, 59);

    // afisarea obiectului creat din clasa DateTime folosind operatorul <<
    cout << "Ora si data este: " << dt << endl;

    return 0;
}
