#include <iostream>
using namespace std;

void konverter(int orer){
  system("clear");
  long int kroner = 0;
  long int femti_lapp = 0;
  long int hundre_lapp = 0;
  long int femhundre_lapp = 0;
  long int tusen_lapp = 0;

  if(orer >= 100){
    kroner = orer / 100;
    orer = orer % 100;
  }
  if(kroner >= 50){
    femti_lapp = kroner / 50;
    kroner = kroner % 50;
  }
  if(femti_lapp >= 2){
    hundre_lapp = femti_lapp / 2;
    femti_lapp = femti_lapp % 2;
  }
  if(hundre_lapp >= 5){
    femhundre_lapp = hundre_lapp / 5;
    hundre_lapp = hundre_lapp % 5;
  }
  if(femhundre_lapp >= 2){
    tusen_lapp = femhundre_lapp / 2;
    femhundre_lapp = femhundre_lapp % 2;
  }

  cout << "----- DU HAR: -----" << endl;
  cout << "Ører: \t \t \t" << orer << " stk." << endl;
  cout << "Kroner: \t \t" << kroner << " stk." << endl;
  cout << "Femti-lapp: \t \t" << femti_lapp << " stk." << endl;
  cout << "Hundre-lapp: \t \t" << hundre_lapp << " stk." << endl;
  cout << "Femhundre-lapp: \t" << femhundre_lapp << " stk." << endl;
  cout << "Tusen-lapp: \t \t" << tusen_lapp << " stk." << endl;
  cout << endl;
}

int main(){
  long int orer = 0;
  cout << "Hvor mange ører har du?: ";
  cin >> orer;
  konverter(orer);
  main();
  return 0;
}
