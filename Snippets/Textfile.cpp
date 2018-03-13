#include <iostream>
#include <fstream>
using namespace std;

int main(){
  // Alternativ måte: ofstream sirasFil("tekst.txt")
  ofstream sirasFil;
  sirasFil.open("tekst.txt");

  if(sirasFil.is_open()){
    sirasFil << "Hei dette er en test" << endl;
  }
  else{
    cerr << "Error: Could not open the file!" << endl;
  }
  sirasFil.close();
  return 0;
}
