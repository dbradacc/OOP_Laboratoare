// LABORATOR VII
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#ifndef DATETIME_H
#define DATETIME_H
#include "Time.h"

class DateTime : public Time {
public:
    DateTime(int day = 7, int month = 4, int year = 2023, int hour = 0, int minute = 0, int second = 0); // Constructor
    void setDay(int day); // Setter pentru zi
    void setMonth(int month); // Setter pentru lună
    void setYear(int year); // Setter pentru an
    int getDay() const; // Getter pentru zi
    int getMonth() const; // Getter pentru lună
    int getYear() const; // Getter pentru an
    void print() const; // Funcție pentru afișarea dată-timp
private:
    int day; // Zi
    int month; // Lună
    int year; // An
};

#endif
