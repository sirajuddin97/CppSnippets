#include "main.h"

// Constructors:
Contact::Contact(){}
Contact::Contact(string n, string e, int ph){
  name = n;
  email = e;
  phone_number = ph;
}

Personal::Personal(){}
Personal::Personal(string n, string e, int ph, int bd, string adr) : Contact(n, e, ph){
  birthday = bd;
  home_address = adr;
}

Business::Business(){}
Business::Business(string n, string e, int ph, string j, string r) : Contact(n, e, ph){
  job = j;
  rank = r;
}

// Root functions:
void Contact::show_menu(){
  int option;
  system("clear");
  cout << "SELECT AN OPTION:" << endl;
  cout << "1. View all personal contacts" << endl;
  cout << "2. View all business contacts" << endl;
  cout << "3. Register a personal contact" << endl;
  cout << "4. Register a business contact" << endl;
  cout << "5. Search for a contact" << endl;
  cout << "0. Exit program" << endl;
  cout << endl << "> Option: ";
  cin >> option;

  switch(option){
    case 1: view_contacts(); break;
    case 2: new_contact(); break;
    case 3: search_contact(); break;
    case 0: exit_program(); break;
    default: throw invalid_option();
  }
}

void Contact::load_contacts(){
  string read_name;
  string read_email;
  int read_phone;
  ifstream file;
  file.open(filename);

  if(file.is_open()){
    while(file >> read_name >> read_email >> read_phone){
      Contact c(read_name, read_email, read_phone);
      my_contacts.push_back(c);
    }
    file.close();
  }
  else{
    throw readfile_error();
  }
}

void Contact::view_contacts(){
  system("clear");
  if(my_contacts.size() == 0){
    cout << "Sorry, you have no contacts!" << endl << endl;
  }
  else{
    cout << "TOTAL CONTACTS: " << my_contacts.size() << endl;
    cout << "---------------------------" << endl;
    cout << my_contacts;
  }
  cout << "Press a key to return to the menu!" << endl;
  char ch; cin >> ch;
  show_menu();
}

void Contact::new_contact(){
  system("clear");
  Contact c;
  cin >> c;
  cout << endl << "A new contact has been saved. Press a key to return to the menu!" << endl;
  char ch; cin >> ch;
  show_menu();
}

void Contact::search_contact(){
  system("clear");
  string search_name;
  cout << "Search name: ";
  cin >> search_name;
  bool found = false;

  for(int i = 0; i < my_contacts.size(); i++){
    if(my_contacts[i].name == search_name){
      cout << endl << "CONTACT FOUND!" << endl;
      cout << "Name: " << my_contacts[i].name << endl;
      cout << "Email: " << my_contacts[i].email << endl;
      cout << "Phone: " << my_contacts[i].phone_number << endl;
      found = true;
    }
  }
  if(found == false) cout << "Invalid search (no contact with that name)." << endl;
  cout << endl << "Press a key to return to the menu!" << endl;
  char ch; cin >> ch;
  show_menu();
}

void Contact::exit_program(){
  ofstream file;
  file.open(filename);

  if(file.is_open()){
    for(int i = 0; i < my_contacts.size(); i++){
      file << my_contacts[i].name << " " << my_contacts[i].email << " " << my_contacts[i].phone_number << endl;
    }
    cout << endl << my_contacts.size() << " contacts has been saved to " << filename << endl;
  }
  else{
    throw writefile_error();
  }
}

ostream& operator<<(ostream& ost, vector<Contact>& v){
  for(int i = 0; i < my_contacts.size(); i++){
    cout << "Name: " << v[i].name << endl;
    cout << "Email: " << v[i].email << endl;
    cout << "Phone: " << v[i].phone_number << endl;
    cout << endl;
  }
}

istream& operator>>(istream& ist, Contact& c){
  cout << "Enter your contact's name: ";
  ist >> c.name;
  cout << "Enter your contact's email: ";
  ist >> c.email;
  cout << "Enter your contact's phone number: ";
  ist >> c.phone_number;
  if(!ist) throw invalid_phone();

  my_contacts.push_back(c);
  return ist;
}
