// LABORATOR VII
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#include "Time.h"
#include <iostream>

using namespace std;

Time::Time(int hour, int minute, int second) {
    setHour(hour);
    setMinute(minute);
    setSecond(second);
}

void Time::setHour(int hour) {
    this->hour = (hour >= 0 && hour < 24) ? hour : 0;
}

void Time::setMinute(int minute) {
    this->minute = (minute >= 0 && minute < 60) ? minute : 0;
}

void Time::setSecond(int second) {
    this->second = (second >= 0 && second < 60) ? second : 0;
}

int Time::getHour() const {
    return hour;
}

int Time::getMinute() const {
    return minute;
}

int Time::getSecond() const {
    return second;
}

void Time::print() const {
    cout << hour << ":" << minute << ":" << second << endl;
}
