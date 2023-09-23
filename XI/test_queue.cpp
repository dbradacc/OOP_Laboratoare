// LABORATOR XI
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#include <iostream>
using std::cout;
using std::endl;
#include "queue.h"

int main()
{
    // Crearea unei cozi generice de tip double cu dimensiunea maximă de 5 elemente
    Queue<double> doubleQueue(5);
    double f = 1.1;

cout << " Daniel Bradac, ETTI\n";
cout << " Laborator XI POO\n";
cout << " \n";

    cout << "Inserarea elementelor in doubleQueue\n";

    // Încercarea de a adăuga elemente în coadă și afișarea lor
    while (doubleQueue.enqueue(f))
    {
        cout << f << ' ';
        f += 1.1;
    }

    cout << "\nCoada este plina. "
         << "Nu se mai poate insera elementul " << f
         << "\n\nExtragerea elementelor din doubleQueue\n";

    // Încercarea de a extrage elemente din coadă și afișarea lor:
        while (doubleQueue.dequeue(f))
        cout << f << ' ';

    cout << "\nCoada este goala. "
         << "Nu se mai pot extrage elemente\n";



    return 0;
}
