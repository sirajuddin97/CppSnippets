#include "main.h"

Person::Person(string n, string id){
  name = n;
  id_num = id;
}

string Person::get_name(){
  return name;
}

string Person::get_id(){
  return id_num;
}

void Person::print(){
  cout << "Name: " << name << endl;
  cout << "ID: " << id_num << endl;
}

// --------------------------------

Student::Student(string n, string id, string prog, int cred) : Person(n, id){
  study_program = prog;
  credits = cred;
}

void Student::change_program(string new_program){
  study_program = new_program;
}

void Student::print(){
  Person::print();
  cout << "Study program: " << study_program << endl;
  cout << "Credits: " << credits << endl;
}

// --------------------------------

Employee::Employee(string n, string id, string office) : Person(n, id){
  office_number = office;
}

void Employee::print(){
  Person::print();
  cout << "Office number: " << office_number << endl;
}
