#include <iostream>
#include <string>
using namespace std;

class Fraction{
public:
  int teller;
  int nevner;

  Fraction(int t, int n){
    teller = t;
    nevner = n;
  }
};

Fraction writeFraction();
