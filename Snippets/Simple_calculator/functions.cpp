/* Alternativ metode (bruke struct):
struct regnestykke{
  double tall1 = 0;
  char op = '0';
  double tall2 = 0;
};
regnestykke reg;
vector<regnestykke> rekke;
*/

#include "header.h"
vector<double> rekke;

Token skrivTall(){
  char input;
  cin >> input;

  switch(input){
    case '1' ... '9': {
      cin.putback(input);
      double input2;
      cin >> input2;
      return Token('i', input2);
    }
    case '+': case '-': case '*': case '/': case '=':{
      return Token(input);
    }
  }
}

void lesTall(){
  cout << "Regnestykke: ";

  while(true){
    Token t = skrivTall();
    if(t.kind == '=') break;

    switch(t.kind){
      case 'i':{
        rekke.push_back(t.value);
        break;
      }
      case '+': case '-': case '*': case '/': case '=':{
        rekke.push_back(t.kind);
        break;
      }
    }
  }
}

void regnTall(){
  double sum = 0;

  for(int i = 0; i < rekke.size(); i++){
    if(rekke[i] != '+'){
      sum = sum + rekke[i];
    }
  }
  cout << "> Svar: " << sum << endl << endl;
  rekke.clear();
  main();
}
