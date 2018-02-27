#include "main.h"

void write_two_ints(string filename, int x, int y){
  ofstream ost{filename}; // opprette fil
  if(!ost) throw -1;
  ost << x << " " << y << endl; // skrive til fil
}

void read_two_ints(string filename, int& n1, int& n2){
  ifstream ist{filename}; // åpne fil
  if(!ist) throw -2;
  ist >> n1 >> n2; // lese fra fil
}
