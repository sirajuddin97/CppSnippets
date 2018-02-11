#include "../../std_lib_facilities.h"

class CharToInt{
private:
  void writeDigits(){
    int digits = 0;
    cout << "Write four digits: ";
    cin >> digits;
    if(!cin) throw -1;

    if(checkStr(digits) == 4){
      splitInt(digits);
    }
    else{
      throw -2;
    }
  }

  void splitInt(int digits){
    string s_digits = to_string(digits);
    char num1 = s_digits[0];
    char num2 = s_digits[1];
    char num3 = s_digits[2];
    char num4 = s_digits[3];

    printOut(s_digits, num1, num2, num3, num4);
  }

  void printOut(string digits, char num1, char num2, char num3, char num4){
    cout << digits << ": " << num1 << " thousand and " << num2 << " hundred and " << num3 << " tens and " << num4 << " ones." << endl;
  }

  int checkStr(int digits){
    string s_digits = to_string(digits);
    return s_digits.length();
  }
};

int main(){
  try{
    CharToInt converter;
    converter.writeDigits();
  }
  catch(int e){
    switch(e){
      case -1:{
        cin.clear();
        cin.ignore(10000, '\n');
        cerr << "Error: Only integers allowed!" << endl;
        break;
      }
      case -2:{
        cerr << "Error: Please enter a 4-digit number!" << endl;
        break;
      }
    }
  }
  cout << endl;

  main();
  return 0;
}
