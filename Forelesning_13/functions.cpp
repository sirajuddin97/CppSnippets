#include "main.h"

void print_numbers(){
  for(int i = 0; i < 200; i++){
    mu.lock();
    cout << "pn-" << i << endl;
    mu.unlock();
  }
}
