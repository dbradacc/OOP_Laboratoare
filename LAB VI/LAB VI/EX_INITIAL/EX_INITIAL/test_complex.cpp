#include <iostream>
using std::cout;
using std::endl;
#include "complex.h"
int main()
{
 Complex n1(2,4);
 Complex n2(1,-4);
 n2 = n1+n2;
 cout << n2.getReal() << ";" << n2.getImaginar() << endl;
 return 0;
}
