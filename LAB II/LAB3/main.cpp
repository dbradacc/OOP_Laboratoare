#include <iostream>
#include <iomanip>
using namespace std;
int Factorial(int);
int main()
{
int n;
cout << "Introduceti numarul pentru care se calculeaza" << "factorialul: ";
cin >> n;
cout << n << "! = " << Factorial(n) << endl;
return 0;
}
int Factorial(int val)
{
if(val <= 1) //cazul de baza
 return 1;
else
 return val * Factorial(val - 1);
}
