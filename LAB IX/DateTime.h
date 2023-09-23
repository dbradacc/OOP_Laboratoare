// LABORATOR IX
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#ifndef DATETIME_H
#define DATETIME_H
#include "Time.h"

class DateTime : public Time {
public:
    // Constructor modificat pentru a apela constructorul clasei Time
    DateTime(int day = 7, int month = 4, int year = 2023, int hour = 0, int minute = 0, int second = 0);
    void setDay(int day); // Setter pentru zi
    void setMonth(int month); // Setter pentru lună
    void setYear(int year); // Setter pentru an
    int getDay() const; // Getter pentru zi
    int getMonth() const; // Getter pentru lună
    int getYear() const; // Getter pentru an

    // Supraincarcare operator <<
    friend std::ostream& operator<<(std::ostream& out, const DateTime& dt);

private:
    int day; // Zi
    int month; // Lună
    int year; // An
};

#endif
