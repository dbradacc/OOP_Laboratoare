// LABORATOR VI
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM I

#include "complex.h"

Complex::Complex(double r, double i) : real(r), imag(i) {}

void Complex::setReal(double r) { real = r; }

double Complex::getReal() const { return real; }

void Complex::setImag(double i) { imag = i; }

double Complex::getImag() const { return imag; }

//Implementarea operatorului binar "+" de adunare a doua numere complexe ca functie nemembra a clase "Complex",
//fiind declarat in complex.h linia 18, iar acesta acceseaza membrii privati

Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

//Implementarea operatorului binar "*" de inmultire a doua numere complexe ca functie nemembra a clasei "Complex",
//fiind declarat in complex.h, linia 19 deoarece nu acceseaza membrii privati


Complex Complex::operator*(const Complex& other) const {
    return Complex(real * other.real - imag * other.imag, imag * other.real + real * other.imag);
}

// Implementarea operatorului unar "!" ca functie membra a clasei, functia calculeaza un obiect "Complex" in care partea
// imaginara este negata, mai exact *(-1). Functia nu modifica obiectul curent, ci creeaza un obiect nou cu aceiasi parte reala, dar cu partea imaginara negata.

Complex Complex::operator!() const {
    return Complex(real, -imag);
}

std::ostream& operator<<(std::ostream& os, const Complex& obj) {
    os << obj.real << " + " << obj.imag << "i";
    return os;
}
