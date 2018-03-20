#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class writefile_error{};
class readfile_error{};
class invalid_phone{};
class invalid_option{};

class Contact{
public:
  Contact();
  Contact(string, string, int);

  void show_menu();
  void load_contacts();
  void view_contacts();
  void new_contact();
  void search_contact();
  void exit_program();

  friend ostream& operator<<(ostream& ost, vector<Contact>& v);
  friend istream& operator>>(istream& ist, Contact& c);

private:
  string name;
  string email;
  int phone_number;
  const string filename = "contacts.txt";
};


class Personal : public Contact{
public:
  Personal();
  Personal(string, string, int, int, string);

private:
  int birthday;
  string home_address;
};

class Business : public Contact{
public:
  Business();
  Business(string, string, int, string, string);

private:
  string job;
  string rank;
};

static vector<Contact> my_contacts;
