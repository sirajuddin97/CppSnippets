#include <iostream>
using namespace std;

class myClass{
  public:
    void printOut(){
      cout << "Printing out some text.";
    }
};

int main(){
  myClass myObject;
  myObject.printOut();

  return 0;
}
