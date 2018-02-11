#include "../../std_lib_facilities.h"

/*
Ikke ferdig med koden!
Example: The bird flies but the fish swims.
Before noun: the
Noun: bird, fish
Verb: rules, flies, swims
Conjunction: and, or, but
*/

class Grammar{
public:
  bool before_noun_exists = false;
  bool before_noun2_exists = false;
  bool noun2_exists = false;
  bool noun_exists = false;
  bool verb_exists = false;
  bool verb2_exists = false;
  bool conjunction_exists = false;

  vector<string> sentence;
  vector<string> before_noun = {"The", "the"};
  vector<string> noun = {"Bird", "bird", "Fish", "fish"};
  vector<string> verb = {"Rules", "rules", "Flies", "flies", "Swims", "swims"};
  vector<string> conjunction = {"And", "and", "Or", "or", "But", "but"};

  void getSentence(){
    string input;
    cout << "Write your sentence (finish with space and dot): ";
    while(cin >> input){
      if(input == ".") break;
      sentence.push_back(input);
    }
  }

  void scanString(){
    if(sentence.size() >= 3){
      for(int i = 0; i < before_noun.size(); i++){
        if(sentence[0] == before_noun[i]){
          before_noun_exists = true;
        }
      }

      for(int i = 0; i < noun.size(); i++){
        if(sentence[1] == noun[i]){
          noun_exists = true;
        }
      }

      for(int i = 0; i < verb.size(); i++){
        if(sentence[2] == verb[i]){
          verb_exists = true;
        }
      }

      if(sentence.size() == 4){
        for(int i = 0; i < conjunction.size(); i++){
          if(sentence[3] == conjunction[i]){
            conjunction_exists = true;
          }
        }
      }

      if(conjunction_exists){
        if(sentence.size() == 5){
          for(int i = 0; i < before_noun.size(); i++){
            if(sentence[4] == before_noun[i]){
              before_noun2_exists = true;
            }
          }
        }

        if(sentence.size() == 6){
          for(int i = 0; i < noun.size(); i++){
            if(sentence[5] == noun[i]){
              noun2_exists = true;
            }
          }
        }

        if(sentence.size() == 7){
          for(int i = 0; i < verb.size(); i++){
            if(sentence[6] == verb[i]){
              verb2_exists = true;
            }
          }
        }
      }
    }
    else{
      cout << "You need to enter atleast three words! (For example: 'The bird rules')." << endl;
    }
  }

  void result(){
    if(sentence.size() >= 3){
      if(before_noun_exists && noun_exists && verb_exists && !conjunction_exists){
        cout << "Your sentence is correct!" << endl;
      }
      else{
        if(!before_noun_exists){
          cout << "Missing 'the' before noun!" << endl;
        }
        if(!noun_exists){
          cout << "Invalid noun!" << endl;
        }
        if(!verb_exists){
          cout << "Invalid verb!" << endl;
        }
      }

      if(before_noun_exists && noun_exists && verb_exists && conjunction_exists){
        if(!before_noun_exists){
          cout << "Missing 'the' before noun!" << endl;
        }
        if(!noun_exists){
          cout << "Invalid noun!" << endl;
        }
        if(!verb_exists){
          cout << "Invalid verb!" << endl;
        }
        if(!before_noun2_exists){
          cout << "Missing 'the' before noun!" << endl;
        }
        if(!noun2_exists){
          cout << "Invalid noun!" << endl;
        }
        if(!verb2_exists){
          cout << "Invalid verb!" << endl;
        }
      }
    }
  }
};

int main(){
  try{
    Grammar check;
    check.getSentence();
    check.scanString();
    check.result();

    cout << endl; main();
    return 0;
  }
  catch(...){
    cerr << "Unknown error!" << endl;
    cin.clear();
    cin.ignore(10000, '\n');
    return 1;
  }
}
