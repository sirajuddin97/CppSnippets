#include "std_lib_facilities.h"

class Token{
  public:
    char kind;
    double value;

    Token(char ch){
      kind = ch;
      value = 0;
    }

    Token(char ch, double d){
      kind = ch;
      value = d;
    }
};

int calculator_v1();
int calculator_v2();

int main(){
  Token t1('8', 345);
  Token t2('+');
  cout << t1.kind << " " << t1.value << endl;
  cout << t2.kind << endl;

  char ch; cin >> ch;
  return 0;
}

int calculator_v2(){
  cout << "Please enter expression: ";
  int lval = 0; // Left value
  int rval = 0; // Right value
  char op = 'd';  // Operator
  int res = 0; // Result

  cin >> lval;
  if(!cin) error("No first operand!");

  while(cin >> op){
    if(op != '='){
      cin >> rval;
      if(!cin) error("No second operand!");
    }

    switch(op){
      case '+':{
        lval += rval; // lval = lval + rval;
        break;
      }
      case '-':{
        lval -= rval;
        break;
      }
      case '*':{
        lval *= rval;
        break;
      }
      case '/':{
        lval /= rval;
        break;
      }
      default:{
        cout << "Result: " << lval << endl;
        return 0;
      }
    }
  }
}

int calculator_v1(){
  cout << "Please enter expression: ";
  int lval = 0; // Left value
  int rval = 0; // Right value
  char op = 'd';  // Operator
  int res = 0; // Result

  cin >> lval >> op >> rval;

  if(op == '+'){
    res = lval + rval;
  }
  else if(op == '-'){
    res = lval - rval;
  }
  else if(op == '*'){
    res = lval * rval;
  }
  else if(op == '/'){
    res = lval / rval;
  }
  cout << "Result: " << res << endl;
  return 0;
}
