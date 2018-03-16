#include "main.h"

int main(){
  /*
  int x = 1234;
  cout << x << endl; // dec
  cout << hex << x << endl; // hex
  cout << oct << x << endl; // oct
  cout << dec << x << endl; // dec

  cout << "Enter a number: ";
  int y; cin >> hex >> y;
  cout << dec << "You typed " << y << endl;
  */

  ofstream ofs("test.txt", ios_base::app); // append (cursor nederst)
  ofs << "Hei fil" << endl;
  ofs.close();

  // Alternativ måte: åpne for både lesing og skriving:
  fstream fs("test.txt", ios_base::in | ios_base::out);
  char ch, ch2;
  fs.seekg(5);
  fs >> ch >> ch2;
  cout << ch << ch2 << endl;
  fs.seekp(2);
  fs << "hallo";
  fs << '4';

  return 0;
}
