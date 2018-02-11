// Lab_1
#include <iostream>
using namespace std;

int main(){
  string myName;
  string firstName;
  string friendName;
  char friendSex = 0;
  int age = 0;
  bool done = false;

  cout << "Enter your name: ";
  cin >> myName;

  cout << "Enter the name of the person you want to write to: ";
  cin >> firstName;

  cout << "Enter your recipient's age: ";
  cin >> age;
  while(age <= 0 || age >= 110){
    cout << "You're kidding! Enter your real age: ";
    cin >> age;
  }

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

  cout << endl << "\t--------------- LETTER ---------------" << endl;
  cout << "\tDear " << firstName << "," << endl;
  cout << "\tHow are you? I am fine. This is a test letter." << endl;
  cout << "\tHave you seen " << friendName << " lately? ";
  switch(friendSex){
    case 'm':{
      cout << "If you see " << friendName << " please ask him to call me." << endl;
      break;
    }
    case 'f':{
      cout << "If you see " << friendName << " please ask her to call me." << endl;
      break;
    }
  }
  cout << "\tI hear you just had a birthday and you are " << age << " years old. ";

  switch(age){
    case 1 ... 12:{
      cout << "Next year you will be " << age+1 << "!" << endl;
      break;
    }
    case 17:{
      cout << "Next year you will be able to vote!" << endl;
      break;
    }
    case 70 ... 110:{
      cout << "I hope you are enjoying retirement!" << endl;
      break;
    }
  }
  cout << endl << "\tYour sincerely,\n" << "\t" << myName << endl;

  char ch; cin>>ch;
  return 0;
}
