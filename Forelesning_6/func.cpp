#include "main.h"

void write_two_ints(string filename, int x, int y){
  ofstream ost{filename}; // opprette fil
  if(!ost) throw -1;
  ost << x << " " << y << endl; // skrive til fil
}

void read_two_ints(string filename, int& n1, int& n2){
  ifstream ist{filename}; // åpne fil
  if(!ist) throw -2;
  ist >> n1 >> n2; // lese fra fil
}

void fill_vector(istream& ist, vector<int>& v, const char terminator){
  int i;
  while(ist >> i){ //while(true)
    v.push_back(i);
  }

  if(ist.eof()){ // eof: end-of-file
    return;
  }

  if(ist.bad()){
    throw -3;
  }

  if(ist.fail()){
    ist.clear();

    char c;
    ist >> c;
    if(c != terminator){
      ist.unget();
      ist.clear(ios_base::failbit);
    }
  }
}

void read_file(vector<int>& v, char terminator){
  cout << "Enter file name: ";
  string filename;
  cin >> filename;

  ifstream ist{filename};
  fill_vector(ist, v, terminator);
}

void read_user_input(vector<int>& v, char terminator){
  cout << "Enter ints: Type " << terminator << " to quit.";
  fill_vector(cin, v, terminator);
}

void write_to_file(vector<int>& v, char terminator){
  cout << "Enter output file name: ";
  string filename;
  cin >> filename;
  ofstream ost{filename};

  for(int i = 0; i < v.size(); i++){
    ost << v[i] << endl;
  }
  ost << terminator;
}
