#include "header.h"

int main(){
  try{
    lesTall();
    regnTall();
  }
  catch(...){
    cerr << "Unknown error!" << endl;
  }
  return 0;
}
