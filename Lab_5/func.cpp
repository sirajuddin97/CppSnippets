#include "header.h"

Fraction writeFraction(){
  char teller, op, nevner;
  cout << "Write your fraction (for example 2/4):" << endl;
  cin >> teller >> op >> nevner;

  return Fraction(teller, nevner);
}
