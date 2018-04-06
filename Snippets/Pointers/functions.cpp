#include "main.h"

void endreTall(int& t){
  int* peker = &t;
  *peker = 10;
}

Person::Person(string f, string e){
  fornavn = f;
  etternavn = e;
}
