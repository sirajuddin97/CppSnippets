#include "main.h"

int main(){
  Person p("Ole Person", "123KH");
  p.print();
  cout << endl;

  Student s("Kari Student", "456KH", "Data", 50);
  s.change_program("Elektro");
  s.print();

  Employee e("Bob Ansatt", "789LE", "C150");
  e.print();

  // --------------------------

  Student* p_stud = new Student("Ole", "1234", "Data", 35);
  p_stud->print();
  delete p_stud; // slette fra minnet

  // --------------------------

  Person person = new Person("Finn", "9876");
  Person p("Finn", "9876");
  p.print();

  Person* pp[100];
  pp[0] = new Person("Finn", "9876");
  pp[1] = new Student("Kari", "1234", "Data", 35);
  pp[2] = new Employee("Line", "1234", "K123");

  // husk virtual void!
  cout << "Before:" << endl;
  pp[0]->print();
  pp[1]->print();
  pp[2]->print();

  for(int i = 0; i < 3; i++){
    try{
      Student* sp = dynamic_cast<Student*>(pp[i]);

      if(sp != NULL){
        sp->change_program("Elektro");
      }
    }
    catch(exception& e){}
  }

  cout << "After:" << endl;
  pp[0]->print();
  pp[1]->print();
  pp[2]->print();

  return 0;
}
