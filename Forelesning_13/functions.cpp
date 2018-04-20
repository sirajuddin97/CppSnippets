#include "main.h"

/*
void print_numbers(){
  for(int i = 0; i < 200; i++){
    mu.lock();
    cout << "pn-" << i << endl;
    mu.unlock();
  }
}
*/

void print_numbers(int id){
  for(int i = 0; i < 100; i++){
    mu.lock();
    cout << id << "-" << i << endl;
    mu.unlock();
  }
}
