#include "main.h"

vector<string> text;

void Scanner::openFile(){
  ifstream hei{filename};
  string s;
  while(hei >> s){
    text.push_back(s);
  }
}

void Scanner::editFile(){
  for(int i = 0; i < text.size(); i++){
    if(text[i] == "a"){
      text[i] = "e";
    }
  }
}

void Scanner::replaceNumber(){

}

void Scanner::saveFile(){
  ofstream ost(filename, ios_base::app);
  for(int i = 0; i < text.size(); i++){
    ost << text[i];
  }
  ost << endl;
  cout << "File edited and saved!" << endl;
}
