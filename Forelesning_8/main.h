#include <iostream>
#include <string>
using namespace std;

class Person{
public:
  Person(string n, string id);
  void print();
  string get_name();
  string get_id();

private:
  string name;
  string id_num;
};

class Student : public Person{
public:
  Student(string n, string id, string prog, int cred);
  void print();
  void change_program(string new_program);

private:
  string study_program;
  int credits;
};

class Employee : public Person{
public:
  Employee(string n, string id, string office);
  void print();

private:
  string office_number;
};
