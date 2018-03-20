#include "main.h"

int main(){
  Fraction f1(1, 2);
  Fraction f2(10, 2);

  if(f1 < f2){
    cout << "f1 er mindre enn f2!" << endl;
  }

  if(f1 > f2){
    cout << "f1 er større enn f2!" << endl;
  }

  if(f1 == f2){
    cout << "f1 og f2 er like store!" << endl;
  }

  if(f1 < 4){
    cout << "f1 er mindre enn 4!" << endl;
  }
  return 0;
}
