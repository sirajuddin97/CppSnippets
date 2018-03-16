#include "main.h"

void WordReplacer::openFile(){
  ifstream file;
  file.open(filename);
  if(file.is_open()){
    if(!file.eof()){
      int i = 0;
      while(!file.eof()){
        char c;
        file.seekg(i);
        file.get(c); // samme som cin.get() eller file >> c;

        switch(c){
          case '1' ... '9':{
            cout << numbers[(int)c - 48];
            break;
          }
          default:{
            cout << c;
          }
        }
        i++;
      }
      file.close();
    }
  }
  else{
    cerr << "Could not open " << filename << "!\n";
  }
}
