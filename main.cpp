#include <iostream>
using namespace std;

void hallarResultados(double num1, double num2, double &s, double &r, double &p );

int main()
{
  double n1, n2;
  double suma=0, resta=0, producto=0;

  cout << "Numero 1 : ";
  cin >> n1;
  cout << "Numero 2 : ";
  cin >> n2;
  hallarResultados(n1,n2, suma, resta, producto);
  cout << "\n";
  cout << "La suma es: " << suma << "\n";
  cout << "La diferencia es : " << resta << "\n";
  cout << "El producto es   : " << producto << "\n";
  return 0;
}

void hallarResultados(double num1, double num2, double &s, double &r, double &p )
{
  s = num1 + num2;
  r = num1 - num2;
  p = num1 * num2;
}