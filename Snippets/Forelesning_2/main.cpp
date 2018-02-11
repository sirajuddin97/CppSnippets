#include "std_lib_facilities.h"

void printMenu(){
  cout << "PICK AN OPTION:" << endl;
  cout << "1 to print register" << endl;
  cout << "2 to print register in alphabetic order" << endl;
  cout << "3 to register new students";
  cout << "4 to quit" << endl;
}

void printRegister(vector<string> v){
  switch(v.size()){
    case 0:{
      cout << "The register is empty" << endl;
      break;
    }
    default:{
      for(int i = 0; i < v.size(); i++){
        cout << "Vector position " << i << "\t" << v[i] << endl;
      }
      break;
    }
  }
}

void printSorted(vector<string> v){
  sort(v.begin(), v.end());
  printRegister(v);
}

vector<string> newStudent(vector<string> v){
  cout << "Enter student names (or q to quit): ";
  string name;
  cin >> name;
  while(name != "q"){
    v.push_back(name);
    cin >> name;
  }
  return v;
}

int main(){
  vector<string> studentRegister;

  int inputVal = -1;
  printMenu();
  cin >> inputVal;

  while(inputVal != 4){
    switch(inputVal){
      case 1:{
        printRegister(studentRegister);
        break;
      }
      case 2:{
        printSorted(studentRegister);
        break;
      }
      case 3:{
        studentRegister = newStudent(studentRegister);
        break;
      }
      default:{
        cout << "Invalid option!" << endl;
        break;
      }
    }
  }
  return 0;
}
