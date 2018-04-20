#include "main.h"

int main(){
  thread t1(print_numbers, 1);
  thread t2(print_numbers, 2);
  thread t3(print_numbers, 3);
  thread t4(print_numbers, 4);
  thread t5(print_numbers, 5);
  thread t6(print_numbers, 6);
  thread t7(print_numbers, 7);

  for(int i = 0; i < 100; i++){
    mu.lock();
    cout << "main-" << i << endl;
    mu.unlock();
  }
  t1.detach();
  if(t1.joinable()){
    t1.join();
  }
  t2.join();
  t3.join();
  t4.join();
  t5.join();
  t6.join();
  t7.join();

  cout << "Number of threads: " << thread::hardware_concurrency() << endl;
  return 0;
}
