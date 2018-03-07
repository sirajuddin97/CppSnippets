#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Token{
public:
  char kind;
  double value;

  Token(char ch) {
    kind = ch;
    value = 0;
  }

  Token(char ch, double val) {
    kind = ch;
    value = val;
  }
};

int main();
Token skrivTall();
void lesTall();
void regnTall();
