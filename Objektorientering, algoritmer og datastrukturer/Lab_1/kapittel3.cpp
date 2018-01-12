// Lab_1
#include <iostream>
using namespace std;

int main(){
  string firstName;
  string friendName;
  char friendSex = 0;
  bool done = false;

  cout << "Enter the name of the person you want to write to: ";
  cin >> firstName;
  cout << "Enter your friend's name: ";
  cin >> friendName;
  cout << "Enter your friend's sex ('m' for male and 'f' for female): ";
  cin >> friendSex;

  while(!done){
    switch(friendSex){
      case 'm':
      case 'f':
      {
        done = true;
        break;
      }
      default:{
        cout << "Invalid sex. Try again: ";
        cin >> friendSex;
        break;
      }
    }
  }

  cout << "\tDear " << firstName << ",\n" << "\tHow are you? I am fine.\n" << "\tThis is a test letter.\n" << "\tHave you seen " << friendName << " lately?\n";

  char ch; cin>>ch;
  return 0;
}
