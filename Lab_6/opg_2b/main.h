#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Contact{
public:
  Contact();
  Contact(string, string, int);
  void show_menu();
  void load_contacts();
  void view_contacts();
  void new_contact();
  void exit_program();

  virtual string get_name() const;
  virtual string get_email() const;
  virtual string get_birthday() const;
  virtual string get_address() const;
  virtual string get_job() const;
  virtual string get_rank() const;
  virtual int get_phone() const;
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
  virtual string get_birthday() const;
  virtual string get_address() const;
  virtual void print();

private:
  string birthday;
  string address;
};

class Business : public Contact{
public:
  Business();
  Business(string, string, int, string, string);
  virtual string get_job() const;
  virtual string get_rank() const;
  virtual void print();

private:
  string job;
  string rank;
};

class invalid_file{};
class invalid_option{};
static vector<Contact*> p_contacts;
static vector<Contact*> b_contacts;
