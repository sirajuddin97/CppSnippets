#include "main.h"

void Scanner::openFile(){
  ifstream file;
  file.open(filename);

  char input;
  while(file >> input){
    text.push_back(input);
  }
  file.close();
}
