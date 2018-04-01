#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class invalid_file{};
class invalid_option{};
void show_menu();
void load_contacts();
void exit_program();

class Contact{
public:
  Contact();
  Contact(string, string, int);
  void view_contacts();
  void new_contact();
  virtual void print();

private:
  string name;
  string email;
  int phone;
};

class Personal : public Contact{
public:
  Personal();
  Personal(string, string, int, string, string);
  virtual void print();

private:
  string birthday;
  string address;
};

class Business : public Contact{
public:
  Business();
  Business(string, string, int, string, string);
  virtual void print();

private:
  string job;
  string rank;
};

static vector<Contact*> my_contacts;
