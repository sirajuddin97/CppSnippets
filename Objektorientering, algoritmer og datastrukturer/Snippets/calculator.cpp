#include <iostream>
using namespace std;

class Calc{
public:
  char type = 0;
  double value = 0;

  Calc(char t, double v){
    type = t;
    value = v;
  }
};

int main(){
  Calc('i', 1.5);
  // tba
  return 0;
}
