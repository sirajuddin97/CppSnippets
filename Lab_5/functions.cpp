#include "main.h"

Fraction::Fraction(double t, double n){
  teller = t;
  nevner = n;
  sum = t/n;
}

bool operator<(Fraction& f_left, Fraction& f_right){
  if(f_left.sum < f_right.sum) return true;
  else return false;
}

bool operator>(Fraction& f_left, Fraction& f_right){
  if(f_left.sum > f_right.sum) return true;
  else return false;
}

bool operator<(Fraction& f_left, int i_right){
  if(f_left.sum < i_right) return true;
  else return false;
}

bool operator>(Fraction& f_left, int i_right){
  if(f_left.sum > i_right) return true;
  else return false;
}

bool operator==(Fraction& f_left, Fraction& f_right){
  if(f_left.sum == f_right.sum) return true;
  else return false;
}
