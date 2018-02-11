#include "std_lib_facilities.h"

class Bad_area{};

void getAge(){
  int age = 0;
  cout << "Enter your age: ";
  cin >> age;

  if(age > 100){
    throw -1;
  }
  if(age < 0){
    throw 'n';
  }
  else{
    cout << "Din alder: " << age << endl;
  }
}

int main(){
  try{
    getAge();
  }
  catch(int e){
    cout << "Feil i funksjonen: age > 100" << endl;
  }
  catch(char e){
    cout << "Feil i funksjonen: age < 0" << endl;
  }

  char ch; cin >> ch;
  return 0;
}

int area(int length, int width){
  if(length <= 0 || width <= 0){
    throw Bad_area();
  }
  return length * width;
}

int main(){
  int x = 1;
  int y = -5;

  try{
    int a = area(x, y);
    cout << "Areal: " << a << endl;
  }
  catch(Bad_area){
    cout << "Bad arguments to area() - Length or width is negative!" << endl;
  }

  char ch; cin >> ch;
  return 0;
}
