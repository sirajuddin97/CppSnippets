#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class writefile_error{};
class readfile_error{};

class Contact{
public:
  Contact(string, string, int);
  string get_name();
  string get_email();
  string get_filename();
  int get_phone();

private:
  string name;
  string email;
  int phone_number;
  string filename = "contacts.txt";
};

static vector<Contact> my_contacts;
ostream& operator<<(ostream& ost, Contact& c);
// istream& operator>>(istream& ist, Contact& c);
