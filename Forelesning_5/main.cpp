#include "stack.h"

int main(){
  try{
    Stack s;
    s.push(3);
    int i = s.pop();
    cout << i << endl;
  }
  catch(int x){
    switch(x){
      case -1:{
        cerr << "Max value reached!" << endl;
        break;
      }
      case -2:{
        cerr << "Pop from empty stack!" << endl;
        break;
      }
      case -3:{
        cerr << "Top from empty stack!" << endl;
        break;
      }
    }
  }
  return 0;
}
