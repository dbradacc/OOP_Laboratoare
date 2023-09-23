// LABORATOR X
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

    cout << " Daniel Bradac, ETTI \n";
    cout << " Laborator XII \n";
    cout << " \n";

    // Crearea containerului map pentru a păstra asocieri de forma "student - notă"
    map<string, int> studenti_note;

    // Adăugarea a 5 elemente în container
    studenti_note["Ion"] = 9;
    studenti_note["Maria"] = 10;
    studenti_note["Ana"] = 8;
    studenti_note["Mihai"] = 7;
    studenti_note["Cristina"] = 10;

    // Afișarea elementelor map-ului folosind iteratori
    cout << "Citirea elementelor cu iterator:" << endl;
    map<string, int>::const_iterator it;
    for (it = studenti_note.begin(); it != studenti_note.end(); ++it) {
        cout << it->first << " - " << it->second << endl;
    }

    // Parcurgerea elementelor map-ului în ordine inversă folosind iteratori inversi
    cout << endl << "Citirea elementelor in ordine inversa:" << endl;
    map<string, int>::reverse_iterator rit;
    for (rit = studenti_note.rbegin(); rit != studenti_note.rend(); ++rit) {
        cout << rit->first << " - " << rit->second << endl;
    }

    return 0;
}
