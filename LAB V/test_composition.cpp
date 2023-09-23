#include <iostream>
using std::cout;
using std::endl;
#include "employee1.h" 
int main()
{
 Employee e("Bob", "Jones", 24, 7, 1949, 12, 3, 1988);

 cout << '\n';
 e.print();

 cout << "\nTesteaza constructorul Date "
 << "pentru valori incorecte:\n";
 Date d(35, 14, 1994);
 cout << endl;

 return 0;
}
