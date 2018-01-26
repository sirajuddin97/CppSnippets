#include "../../std_lib_facilities.h"
#include <unistd.h>
#include <chrono>

int sjekkStr(int tall){
  int tallStr = to_string(tall).length();
  if(tallStr == 4){
    return true;
  }
  else{
    return false;
  }
}

void startSpill(vector<char> tallVektor){
  system("clear");
  int gjettTall = 0;
  int riktig = 0, riktigTall1 = 0, riktigTall2 = 0, riktigTall3 = 0, riktigTall4 = 0;
  cout << "SPILLET HAR STARTET! LYKKE TIL!" << endl;

  while(true){
    cout << "Gjett et firesifret tall (" << riktig << "/4 riktig så langt): ";
    cin >> gjettTall;
    if(!cin){ throw -1; }

    string gjett = to_string(gjettTall);
    if(sjekkStr(gjettTall)){
      if(gjett[0] == tallVektor[0] && riktigTall1 == 0){
        cout << "\tTall 1 er riktig!" << endl;
        riktigTall1 = 1;
        riktig++;
      }
      if(gjett[1] == tallVektor[1] && riktigTall2 == 0){
        cout << "\tTall 2 er riktig!" << endl;
        riktigTall2 = 1;
        riktig++;
      }
      if(gjett[2] == tallVektor[2] && riktigTall3 == 0){
        cout << "\tTall 3 er riktig!" << endl;
        riktigTall3 = 1;
        riktig++;
      }
      if(gjett[3] == tallVektor[3] && riktigTall4 == 0){
        cout << "\tTall 4 er riktig!" << endl;
        riktigTall4 = 1;
        riktig++;
      }

      if(riktigTall1 == 1 && riktigTall2 == 1 && riktigTall3 == 1 && riktigTall4 == 1){
        system("clear");
        cout << "Gratulerer! Du har fullført spillet!" << endl;
        cout << "Riktig tall var " << tallVektor[0] << tallVektor[1] << tallVektor[2] << tallVektor[3] << "." << endl;
        break;
      }
    }
    else{
      cerr << "\tDu må skrive inn et firesifret tall!" << endl;
    }
  }
}

void skrivTall(){
  int tall = 0;
  cout << "Skriv inn et firesifret tall (alle tallene må være mellom 0-9): ";
  cin >> tall;
  if(!cin){ throw -1; }

  if(sjekkStr(tall)){
    vector<char> tallVektor;
    string nyttTall = to_string(tall);

    tallVektor.push_back(nyttTall[0]);
    tallVektor.push_back(nyttTall[1]);
    tallVektor.push_back(nyttTall[2]);
    tallVektor.push_back(nyttTall[3]);

    cout << "\tFlott! Spillet starter om 5 sekunder..." << endl;
    usleep(5000000); // 5 seconds
    startSpill(tallVektor);
  }
  else{
    cerr << "\tDu må skrive inn et firesifret tall!" << endl;
  }
}

int main(){
  try{
    skrivTall();
  }
  catch(int a){
    cerr << "\tKun tall! Bokstaver og tegn er ikke tillat!" << endl;
    cin.clear();
    cin.ignore(10000, '\n');
  }
  cout << endl;

  main();
  return 0;
}
