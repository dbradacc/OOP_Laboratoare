#include <iostream>
using std::cout;
#include "time2.h"

int main()
{
    Time t1(31, 12, 2019, 23, 59, 59),
                t2(24, 3, 2020, 7, 12, 8),
                t3(31, 12, 2021, 23, 59, 59),
                t4(19, 3, 2020, 20, 11, 29),
                t5(38, 13, 2021, 24, 52, 58);
    char r='d';

    t1.tick ();

    cout<<"Data introdusa: ";
    t2.AfisareInitiala();
    cout<<endl;
    t2.Tick();
    cout<<"Data dupa incrementarea secundelor: ";
    t2.Afisare();

    cout<<endl<<endl;
    cout<<"Data introdusa: ";
    t3.AfisareInitiala();
    cout<<endl;
    t3.Tick();
    cout<<"Data dupa incrementarea secundelor: ";
    t3.Afisare();

    cout<<endl<<endl;
    cout<<"Data introdusa: ";
    t4.AfisareInitiala();
    cout<<endl;
    t4.Tick();
    cout<<"Data dupa incrementarea secundelor: ";
    t4.Afisare();

    cout<<endl<<endl;
    cout<<"Data introdusa: ";
    t5.AfisareInitiala();
    cout<<endl;
    t5.Tick();
    cout<<"Data dupa incrementarea secundelor: ";
    t5.Afisare();
    cout<<endl<<endl<<endl;

    cout<<"Incrementarea secundelor"<<endl;
    cout<<"Data introdusa: ";
    t1.AfisareInitiala();
    cout<<endl;
    while(r=='d')
	{
        cout<<"Apasati 'd' pentru ca continua sau 'n' pentru a iesi: "; cin>>r;
        t1.Tick();
        cout<<"Data dupa incrementarea secundelor: ";
        t1.Afisare();
        cout<<endl<<endl;
    }
    if(r=='n')
        cout<<"Incrementarea secundelor s-a incheiat.";

    return 0;
}
