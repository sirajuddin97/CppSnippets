#include "main.h"

// CONSTRUCTORS:
Contact::Contact(){}
Contact::Contact(string n, string e, int p){
  name = n;
  email = e;
  phone = p;
}

Personal::Personal(){}
Personal::Personal(string n, string e, int p, string b, string a) : Contact(n, e, p){
  birthday = b;
  address = a;
}

Business::Business(){}
Business::Business(string n, string e, int p, string j, string r) : Contact(n, e, p){
  job = j;
  rank = r;
}

// RETURN FUNCTIONS:
int Contact::get_phone() const{ return phone; }
string Contact::get_name() const{ return name; }
string Contact::get_email() const{ return email; }
string Contact::get_birthday() const{}
string Contact::get_address() const{}
string Contact::get_job() const{}
string Contact::get_rank() const{}

string Personal::get_birthday() const{ return birthday; }
string Personal::get_address() const{ return address; }

string Business::get_job() const{ return job; }
string Business::get_rank() const{ return rank; }

// CONTACT CLASS FUNCTIONS:
void Contact::show_menu(){
  system("clear");
  cout << "1. View contacts" << endl;
  cout << "2. New contact" << endl;
  cout << "3. Search contact" << endl;
  cout << "4. Exit program" << endl;
  cout << "> Option: ";
  int option;
  cin >> option;

  switch(option){
    case 1: view_contacts(); break;
    case 2: new_contact(); break;
    case 3: break;
    case 4: exit_program(); break;
    default: throw invalid_option(); break;
  }
}

void Contact::load_contacts(){
  ifstream file;
  file.open("p_contacts.txt");
  if(!file) throw invalid_file();

  string c_name, c_email, c_birthday, c_address, c_job, c_rank; int c_phone;
  while(file >> c_name >> c_email >> c_phone >> c_birthday >> c_address){
    Personal* p = new Personal(c_name, c_email, c_phone, c_birthday, c_address);
    p_contacts.push_back(p);
  }
  file.close();

  file.open("b_contacts.txt");
  if(!file) throw invalid_file();
  while(file >> c_name >> c_email >> c_phone >> c_job >> c_rank){
    Business* b = new Business(c_name, c_email, c_phone, c_job, c_rank);
    b_contacts.push_back(b);
  }
  file.close();
}

void Contact::view_contacts(){
  system("clear");
  int count = p_contacts.size() + b_contacts.size();
  cout << "TOTAL CONTACTS: " << count << endl << endl;

  for(int i = 0; i < p_contacts.size(); i++){
    p_contacts[i]->print();
    cout << endl;
  }

  for(int i = 0; i < b_contacts.size(); i++){
    b_contacts[i]->print();
    cout << endl;
  }
  cout << "Press a key to return to the menu!" << endl;
  char ch; cin >> ch;
  show_menu();
}

void Contact::new_contact(){
  system("clear");
  cout << "Type 'p' for PERSONAL and 'b' for BUSINESS: ";
  string c_name, c_email, c_birthday, c_address, c_job, c_rank; int c_phone;
  char input; cin >> input;

  switch(input){
    case 'p':{
      system("clear");
      cout << "Format: [name] [email] [phone] [birthday] [address]" << endl;
      cout << "New personal contact: ";
      cin >> c_name >> c_email >> c_phone >> c_birthday >> c_address;
      Personal* p = new Personal(c_name, c_email, c_phone, c_birthday, c_address);
      p_contacts.push_back(p);
      break;
    }
    case 'b':{
      system("clear");
      cout << "Format: [name] [email] [phone] [job] [rank]" << endl;
      cout << "New business contact: ";
      cin >> c_name >> c_email >> c_phone >> c_job >> c_rank;
      Business* b = new Business(c_name, c_email, c_phone, c_job, c_rank);
      b_contacts.push_back(b);
      break;
    }
    default:{
      throw invalid_option();
    }
  }
  cout << endl << "New contact created. Press a key to return to the menu!" << endl;
  char ch; cin >> ch;
  show_menu();
}

void Contact::exit_program(){
  system("clear");
  ofstream file;
  file.open("p_contacts.txt");
  if(!file) throw invalid_file();
  for(int i = 0; i < p_contacts.size(); i++){
    file << p_contacts[i]->get_name() << " ";
    file << p_contacts[i]->get_email() << " ";
    file << p_contacts[i]->get_phone() << " ";
    file << p_contacts[i]->get_birthday() << " ";
    file << p_contacts[i]->get_address() << endl;
  }
  file.close();

  file.open("b_contacts.txt");
  if(!file) throw invalid_file();
  for(int i = 0; i < b_contacts.size(); i++){
    file << b_contacts[i]->get_name() << " ";
    file << b_contacts[i]->get_email() << " ";
    file << b_contacts[i]->get_phone() << " ";
    file << b_contacts[i]->get_job() << " ";
    file << b_contacts[i]->get_rank() << endl;
  }
  file.close();
  int count = p_contacts.size() + b_contacts.size();
  cout << count << " contacts has been saved. Closing program!" << endl;
}

void Contact::print(){
  cout << "Name: " << name << endl;
  cout << "Email: " << email << endl;
  cout << "Phone: " << phone << endl;
}

// PERSONAL CLASS FUNCTIONS:
void Personal::print(){
  Contact::print();
  cout << "Birthday: " << birthday << endl;
  cout << "Home address: " << address << endl;
}

// BUSINESS CLASS FUNCTIONS:
void Business::print(){
  Contact::print();
  cout << "Job: " << job << endl;
  cout << "Rank: " << rank << endl;
}
