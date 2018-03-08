#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ofstream sirasFil;
  sirasFil.open("tekst.txt");
  sirasFil << "Hei dette er en test" << endl;
}
