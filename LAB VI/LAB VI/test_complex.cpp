// LABORATOR VI
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM I

#include <iostream>
#include "complex.h"

int main()
{
Complex n1(2, 4);
Complex n2(1, -4);


//Apelarea celor 3 operatori in functia main, pentru a ilustra functionarea lor corecta

// test operator +
Complex sum = n1 + n2;
std::cout << n1 << " + " << n2 << " = " << sum << std::endl;

// test operator *
Complex prod = n1 * n2;
std::cout << n1 << " * " << n2 << " = " << prod << std::endl;

// test operator !
Complex neg = !n1;
std::cout << "Negatia lui " << n1 << " este " << neg << std::endl;

return 0;
}
