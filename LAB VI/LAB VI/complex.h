// LABORATOR VI
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM I

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex
{
public:
Complex(double r = 0, double i = 0); // constructor
void setReal(double r);
double getReal() const; // metoda const, deoarece nu modifica obiectul
void setImag(double i);
double getImag() const; // metoda const, deoarece nu modifica obiectul

Complex operator+(const Complex& other) const; // operator + ca metoda, deoarece acceseaza membrii privati
Complex operator*(const Complex& other) const; // operator * ca functie friend, deoarece nu acceseaza membrii privati
Complex operator!() const; // operator ! ca metoda, deoarece modifica obiectul

// Implementarea operatorului "<<" pentru clasa "Complex" ca functie "friend". Implementat > header, deoarece este important acces la membrii privati ai clasei pentru o afisare
// corecta a obiectelor din "Complex". Functia "friend" primeste un obiect "std::ostream" ca primul arguemnt si un obiect "Complex" ca al doilea argument. Op. de iesire este apoi
// rescris pentru a afisa obiectul "Complex" sub forma "a + bi", unde "a" este partea reala si "b" este partea imaginara.
// Functia returneaza un obiect "std::ostream&" pentru a permite sirurilor de iesire in serie.


friend std::ostream& operator<<(std::ostream& os, const Complex& obj); // operator << ca functie friend, deoarece acceseaza membrii privati


private:
double real;
double imag;

};

#endif
