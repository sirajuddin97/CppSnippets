#include "main.h"

int main(){
  Person p("Ole Person", "123KH");
  p.print();
  cout << endl;

  Student s("Kari Student", "456KH", "Data", 50);
  s.change_program("Elektro");
  s.print();
  cout << endl;

  Employee e("Bob Ansatt", "789LE", "C150");
  e.print();
  cout << endl;

  return 0;
}
