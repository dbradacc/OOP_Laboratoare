// LABORATOR VII
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#include "DateTime.h"
#include <iostream>

using namespace std;

// constructor cu parametri
DateTime::DateTime(int h, int m, int s, int day, int month, int year) : Time(h, m, s) {
    this->day = day;
    this->month = month;
    this->year = year;
}

// functie de afisare a datei si timpului
void DateTime::print() const {
    // se apeleaza functia print() din clasa de baza Time pentru a afisa ora, minutele si secundele
    Time::print();
    // se afiseaza ziua, luna si anul
    cout << day << "." << month << "." << year << endl;
}

// getter pentru zi
int DateTime::getDay() const {
    return day;
}

// getter pentru luna
int DateTime::getMonth() const {
    return month;
}

// getter pentru an
int DateTime::getYear() const {
    return year;
}
