// LABORATOR VII
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#ifndef TIME_H
#define TIME_H

class Time {
public:
    Time(int hour = 0, int minute = 0, int second = 0); // Constructor
    void setHour(int hour); // Setter pentru ore
    void setMinute(int minute); // Setter pentru minute
    void setSecond(int second); // Setter pentru secunde
    int getHour() const; // Getter pentru ore
    int getMinute() const; // Getter pentru minute
    int getSecond() const; // Getter pentru secunde
    void print() const; // Funcție pentru afișarea timpului
private:
    int hour; // Ore
    int minute; // Minute
    int second; // Secunde
};

#endif
