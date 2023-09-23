// LABORATOR IX
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#include "DateTime.h"
#include <iostream>

using namespace std;

// Constructor care apeleaza constructorul clasei Time pentru initializarea orelor, minutelor si secundelor
DateTime::DateTime(int day, int month, int year, int hour, int minute, int second) : Time(hour, minute, second) {
    setDay(day);
    setMonth(month);
    setYear(year);
}

void DateTime::setDay(int day) {
    this->day = (day >= 1 && day <= 31) ? day : 1;
}

void DateTime::setMonth(int month) {
    this->month = (month >= 1 && month <= 12) ? month : 1;
}

void DateTime::setYear(int year) {
    this->year = (year >= 2023) ? year : 2023;
}

int DateTime::getDay() const {
    return day;
}

int DateTime::getMonth() const {
    return month;
}

int DateTime::getYear() const {
    return year;
}

// Supraincarcare operator << pentru afisarea datei si a timpului
ostream& operator<<(ostream& out, const DateTime& dt) {
    out << dt.year << "-" << dt.month << "-" << dt.day << " " << static_cast<const Time&>(dt);
    return out;
}
