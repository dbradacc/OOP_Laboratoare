#include <iostream>
using std::cout;
using std::endl;

class Time {
public: // EXERCITIU 2
    Time(); // CONSTRUCTOR
    void setHour(int); //exercitiu 4
    void setMinute(int);//exercitiu 4
    void setSecond(int);//exercitiu 4
    int getHour(); //exerctiu 4
    int getMinute();//exercitiu 4
    int getSecond(); //exercitiu 4
    void printShort(); //tiparire in format scurt
    void printLong(); //tiparire in format lung

private:
    int hour; //0-23
    int minute; //0-59
    int second; //0-59
};

Time::Time() {
    hour = minute = second = 0;
    cout << endl;
    cout << "S-a rulat constructorul clasei Time" << endl; //EXERCITIU 3
}

void Time::setHour(int h) {
    hour = (h >= 0 && h < 24) ? h : 0; // EXERCITIU 4
}

void Time::setMinute(int m) {
    minute = (m >= 0 && m < 60) ? m : 0; // EXERCITIU 4
}

void Time::setSecond(int s) {
    second = (s >= 0 && s < 60) ? s : 0; // EXERCITIU 4
}

int Time::getHour() {
    return hour;
}

int Time::getMinute() {
    return minute;
}

int Time::getSecond() {
    return second;
}

void Time::printShort() {
    cout << (hour < 10 ? "0" : "") << hour << ":"
        << (minute < 10 ? "0" : "") << minute;
}

void Time::printLong() {
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12)
        << ":" << (minute < 10 ? "0" : "") << minute
        << ":" << (second < 10 ? "0" : "") << second
        << (hour < 12 ? " AM" : " PM");
}

int main() {
    Time t; // INITIAZA OBIECTUL "T" DE TIP TIME
    cout << "Valoarea initialia in format scurt este ";
    t.printShort();
    cout << "\nValoarea initialia in format lung este ";
    t.printLong();
    t.setHour(13); // EXERCITIU 4, APELAREA FUNCTIEI GETTER INTR-O INSTRUCTIUNE DE AFISARE FUNCTIEI MAIN
    t.setMinute(27); // EXERCITIU 4, APELAREA FUNCTIEI GETTER INTR-O INSTRUCTIUNE DE AFISARE FUNCTIEI MAIN
    t.setSecond(6);// EXERCITIU 4, APELAREA FUNCTIEI GETTER INTR-O INSTRUCTIUNE DE AFISARE FUNCTIEI MAIN
    t.getHour ();
    cout << "\n\nOra in format scurt dupa setTime este ";
    t.printShort();
    cout << "\nOra in format lung dupa setTime este ";
    t.printLong();

    // AFISAREA VALORILOR MEMBRELOR OBIECTULUI FOLOSIND FUNCTIILE GETTER
    cout << "\n\nOra curenta este " << t.getHour() << ":"
        << t.getMinute() << ":" << t.getSecond() << endl;

    // ASIGNAREA UNOR VALORI INVALIDE MEMBRILOR OBIECTULUI
    t.setHour(99);
    t.setMinute(99);
    t.setSecond(99);
    cout << "\nDupa asignarea valorilor invalide:"
        << "\nOra in format scurt: ";
    t.printShort();
    cout << "\nOra in format lung: ";
    t.printLong();


    return 0;
}
