#include "main.h"

Contact::Contact(string n, string e, int ph){
  name = n;
  email = e;
  phone_number = ph;
}

string Contact::get_name(){
  return name;
}

string Contact::get_email(){
  return email;
}

string Contact::get_filename(){
  return filename;
}

int Contact::get_phone(){
  return phone_number;
}

ostream& operator<<(ostream& ost, Contact& c){
  ost << "Name: " << c.get_name() << endl;
  ost << "Email: " << c.get_email() << endl;
  ost << "Phone: " << c.get_phone() << endl;

  ofstream file;
  file.open(c.get_filename());
  if(file.is_open()){
    file << "Name: " << c.get_name() << endl;
    file << "Email: " << c.get_email() << endl;
    file << "Phone: " << c.get_phone() << endl;
    file.close();
  }
  else{
    if(!file) throw writefile_error();
  }
  return ost;
}

// istream& operator>>(istream& ist, Contact& c){
//   ist >> c.get_name();
//   return ist;
//   // ifstream file;
//   // file.open(c.get_filename());
//   // if(file.is_open()){
//   //   string input;
//   //   file >> input;
//   // }
//   // else{
//   //   throw readfile_error();
//   // }
// }
