#include "main.h"

// Global functions:
void show_menu(){
  system("clear");
  cout << "1. View contacts" << endl;
  cout << "2. New contact" << endl;
  cout << "3. Search contact" << endl;
  cout << "4. Exit program" << endl;
  cout << "> Option: ";
  int option;
  cin >> option;

  Contact c;
  switch(option){
    case 1: c.view_contacts(); break;
    case 2: c.new_contact(); break;
    default: throw invalid_option(); break;
  }
}

void load_contacts(){
  ifstream file;
  file.open("p_contacts.txt");
  if(!file) throw invalid_file();
  string p_name, p_email, p_birthday, p_address; int p_phone;

  while(file >> p_name >> p_email >> p_phone >> p_birthday >> p_address){
    Personal* p = new Personal(p_name, p_email, p_phone, p_birthday, p_address);
    my_contacts.push_back(p);
  }
  file.close();

  file.open("b_contacts.txt");
  if(!file) throw invalid_file();
  string b_name, b_email, b_job, b_rank; int b_phone;

  while(file >> b_name >> b_email >> b_phone >> b_job >> b_rank){
    Business* b = new Business(b_name, b_email, b_phone, b_job, b_rank);
    my_contacts.push_back(b);
  }
  file.close();
}

void exit_program(){

}

// Contact functions:
Contact::Contact(){}
Contact::Contact(string n, string e, int p){
  name = n;
  email = e;
  phone = p;
}

void Contact::view_contacts(){
  system("clear");
  cout << "TOTAL CONTACTS: " << my_contacts.size() << endl << endl;
  for(int i = 0; i < my_contacts.size(); i++){
    my_contacts[i]->print();
    cout << endl;
  }
  cout << "Press a key to return to the menu..." << endl;
  char ch; cin >> ch;
  show_menu();
}

void Contact::new_contact(){
  system("clear");
  cout << "Type 'p' for PERSONAL and 'b' for BUSINESS: ";
  char input; cin >> input;
  switch(input){
    case 'p':{
      string p_name, p_email, p_birthday, p_address; int p_phone;
      cout << "Format: [name] [email] [phone] [birthday] [address]" << endl;
      cout << "New personal contact: ";
      cin >> p_name >> p_email >> p_phone >> p_birthday >> p_address;
      Personal* p = new Personal(p_name, p_email, p_phone, p_birthday, p_address);
      my_contacts.push_back(p);
      break;
    }
    case 'b':{
      string b_name, b_email, b_job, b_rank; int b_phone;
      cout << "Format: [name] [email] [phone] [job] [rank]" << endl;
      cout << "New business contact: ";
      cin >> b_name >> b_email >> b_phone >> b_job >> b_rank;
      Business* b = new Business(b_name, b_email, b_phone, b_job, b_rank);
      my_contacts.push_back(b);
      break;
    }
    default:{
      throw invalid_option();
    }
  }
  cout << "Press a key to return to the menu..." << endl;
  char ch; cin >> ch;
  show_menu();
}

void Contact::print(){
  cout << "Name: " << name << endl;
  cout << "Email: " << email << endl;
  cout << "Phone: " << phone << endl;
}

// Personal contact functions:
Personal::Personal(){}
Personal::Personal(string n, string e, int p, string b, string a) : Contact(n, e, p){
  birthday = b;
  address = a;
}

void Personal::print(){
  Contact::print();
  cout << "Birthday: " << birthday << endl;
  cout << "Home address: " << address << endl;
}

// Business contact functions:
Business::Business(){}
Business::Business(string n, string e, int p, string j, string r) : Contact(n, e, p){
  job = j;
  rank = r;
}

void Business::print(){
  Contact::print();
  cout << "Job: " << job << endl;
  cout << "Rank: " << rank << endl;
}
