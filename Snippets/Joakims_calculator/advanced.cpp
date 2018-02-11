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

class Token_stream{
public:
  Token_stream();
  Token get();
  void putback(Token);

private:
  Token buffer;
  bool full;
};

double expression_v1();
double expression_v2();
double term();
double primary();
Token get_token();

int main(){
  try{
    while(cin){
      cout << expression_v2() << endl;
    }
    keep_window_open();
    return 0;
  }
  catch(exception& e){
    cerr << e.what() << endl;
    keep_window_open();
    return 1;
  }
  catch(...){
    cerr << "Unknown error!" << endl;
    keep_window_open();
    return 2;
  }
}

double expression_v1(){
  double left = expression_v1();
  Token t = get_token();

  switch(t.kind){
    case '+':{
      return left + term();
      break;
    }
    case '-':{
      return left - term();
      break;
    }
    default:{
      return left;
      break;
    }
  }
}

double expression_v2(){
  double left = term();
  Token t = get_token();

  while(true){
    switch(t.kind){
      case '+':{
        left = left + term();
        t = get_token();
        break;
      }
      case '-':{
        left = left - term();
        t = get_token();
        break;
      }
      default:{
        return left;
        break;
      }
    }
  }
}

double term(){
  double left = primary;
  Token t  = get_token;

  while(true){
    switch(t.kind){
      case '*':{
        left = left * primary();
        t = get_token();
        break;
      }
      case '/':{
        double d = primary;
        if(d == 0) error("Divided by zero!");

        left = left / d;
        t = get_token();
        break;
      }
      default:{
        return left;
        break;
      }
    }
  }
}

double primary(){
  Token t = get_token();
  switch (t.kind) {
    case '(':{
      double d = expression_v2();
      t = get_token();
      if(t.kind != ')') error(") expected");
      return d;
      break;
    }
    case '8':{
      return t.value;
      break;
    }
    default:{
      error("Primary expected");
      break;
    }
  }
}

Token get_token(){
  char ch;
  cin >> ch;
  switch(ch){
    case '(': case: ')': case '+': case '-': case '*': case '/':{
      return Token(ch);
    }
    case '.': case '0': case '1': case '2': case '3': case '4': case '5': case '6':
    case '7': case '8': case '9':{
      cin.putback(ch);
      double val;
      cin >> val;
      return Token('8', val);
    }
  }
}

void Token_stream::putback(Token t){
  if(full) error("Putback into full buffer");
  buffer = t;
  full = true;
}

Token_stream::Token_stream() :full(false), buffer(0){}

Token Token_stream::get(){
  if(full){
    full = false;
    return buffer;
  }
}
