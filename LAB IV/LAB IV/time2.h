#ifndef TIME2_H
#define TIME2_H

class Time {
    public: Time(int = 0, int = 0, int = 0, int = 0, int = 0, int = 0);
    Time();
    Time(int);
    Time(int,int);


            void setTime(int &, int &, int &, int &, int &, int &);
            void Tick();
            void Afisare();
            void AfisareInitiala();
    private: int year; // Constructor cu 6 parametri cu valori implicite.
             int month;
             int day;
             int hour;
             int minute;
             int second;

// Constructorii clasei Time. ÎnlocuiŃi constructorul clasei Time cu 4 constructori care să aibă
// 0, 1, 2 şi 3 parametri fără valori implicite. FuncŃia main trebuie să ruleze la fel ca înainte, fără nicio
// modificare.

};
#endif // Time_h
