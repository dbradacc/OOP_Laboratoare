#include <iostream>
#include "dreapta.h"

int main() {
    // Declaram un obiect de tipul Dreapta si il initializam cu coordonatele celor doua puncte care determina dreapta
    Dreapta d(1, 2, 3, 4);

    // Afisam obiectul
    std::cout << "Dreapta este: " << d << std::endl;

    // Modificam coordonatele primului punct al dreptei
    d.setP1(5, 6);

    // Modificam coordonatele celui de-al doilea punct al dreptei
    d.setP2(7, 8);

    // Afisam obiectul din nou pentru a vedea modificarea facuta
    std::cout << "Dreapta dupa modificare este: " << d << std::endl;

    return 0;
}
