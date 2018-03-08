#include <iostream>
#include <string>
using namespace std;

class Person{
public:
  Person(string n, string id);
  virtual void print();
  string get_name();
  string get_id();

private:
  string name;
  string id_num;
};

class Student : public Person{
public:
  Student(string n, string id, string prog, int cred);
  virtual void print();
  void change_program(string new_program);

private:
  string study_program;
  int credits;
};

class Employee : public Person{
public:
  Employee(string n, string id, string office);
  virtual void print();

private:
  string office_number;
};
