#include <iostream>
#include <string>
using namespace std;

class Fraction{
public:
  Fraction(double, double);
  friend bool operator<(Fraction& f_left, Fraction& f_right);
  friend bool operator>(Fraction& f_left, Fraction& f_right);
  friend bool operator<(Fraction& f_left, int i_right);
  friend bool operator>(Fraction& f_left, int i_right);
  friend bool operator==(Fraction& f_left, Fraction& f_right);

private:
  double teller;
  double nevner;
  double sum;
};
