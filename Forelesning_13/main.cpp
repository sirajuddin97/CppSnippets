#include "main.h"

int main(){
  thread t1(print_numbers);

  for(int i = 0; i < 100; i++){
    mu.lock();
    cout << "main-" << i << endl;
    mu.unlock();
  }
  t1.detach();
  if(t1.joinable()){
    t1.join();
  }

  cout << "Number of threads: " << thread::hardware_concurrency() << endl;
  return 0;
}
