#include "../../std_lib_facilities.h"

// Grammar:


class Grammar{
public:
  void getSentence(){
    string sentence;
    cout << "Write your sentence: ";
    cin >> sentence;
  }
};

int main(){
  try{
    Grammar check;
    check.getSentence();
    char ch; cin >> ch;
    return 0;
  }
  catch(...){
    cerr << "Unknown error!" << endl;
    cin.clear();
    cin.ignore(10000, '\n');
    return 1;
  }
}
