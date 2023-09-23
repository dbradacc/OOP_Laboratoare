#include <iostream>
using std::cout;
#include "time2.h"

Time::Time(int d, int m, int y, int hr, int min, int sec)
{
    setTime(y, m, d, hr, min, sec);
}
// Constructorii clasei Time. ÎnlocuiŃi constructorul clasei Time cu 4 constructori care să aibă
// 0, 1, 2 şi 3 parametri fără valori implicite. FuncŃia main trebuie să ruleze la fel ca înainte, fără nicio
// modificare.
Time::Time(){y= m=d=hr= min=sec=0;}
Time::Time(int y) {y=y; m=d=hr= min=sec=0;}
Time::Time(int y, int m) {y=y; m=m d=hr= min=sec=0;}

void Time::setTime(int &y, int &m,int &d,int &hr,int &min,int &sec)
{
	day=d;
	month=m;
	year=y;
	hour=hr;
	minute=min;
	second=sec;
}
void Time::AfisareInitiala()
{
	cout<<(day <= 9 ? "0" :" ")<<day<<"/"<<(month<=9 ? "0" : " ")<<month<<"/"<<year<<"--------------"<<(hour <= 10 ? "0" : " ")
	<<hour<<":"<<(minute <= 10 ? "0" : " ")<<minute<<":"<<(second <= 10 ? "0" : " ")<<second;
}
void Time::Afisare()
{
    if(day >= 1 && day<32 && month >= 1 && month <= 12 && year >=1 && year <= 9999 && hour <=23 && minute <=59 && second <=59)
        cout<<(day <=9 ? "0" : "")<<day<<"/"<<(month <=9 ? "0" : "")<<month<<"/"<<year<<" ---------- "<<(hour<10 ? "0" : "")
        <<hour<<":"<<(minute<10 ? "0" : "")<<minute<<":"<<(second<10 ? "0" : "")<<second;
    else
        cout<<"Data invalida.";
}
void Time::Tick() // EXERCITIU 3 - FUNCTIA TICK
{
	 if(second == 59 )
    {
        if(minute == 59)
		{
            if (hour == 23)
            {
                minute=0; second=0; hour=0;
                if(month==12 && day==31)
				{
                    year++;
                    month=1;
                    day=1;
                }
                else
				{
                    if(day<31)
                        day++;
                    else
                        month++;
                }
            }
        }
    }
    if(second<59)
    	second ++;
    else
	{
    		if(second ==59 && minute<=59)
    		{
    			minute++;
    			second=0;
		}
	}

}
