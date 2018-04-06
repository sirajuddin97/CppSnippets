#include "main.h"

int main(){
  // Fra forrige semester:
  int tall = 5;
  cout << "Før: " << tall << endl;
  endreTall(tall);
  cout << "Etter: " << tall << endl;

  // ---------------------------------------------

  // Uten pekere:
  Person p1("Sirajuddin", "Asjad");
  cout << p1.fornavn << endl;

  // Med pekere (metode 1):
  Person p2("Sirajuddin", "Asjad");
  Person* peker = &p2;
  cout << peker->fornavn << endl;

  // Med pekere (metode 2):
  Person* p3 = new Person("Sirajuddin", "Asjad");
  cout << p3->fornavn << endl;
  delete p3;

  return 0;
}
