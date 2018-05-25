#include <iostream>
#include <string>
#include <thread>
#include <mutex>
using namespace std;

static mutex mu;

void print(){
  cout << "From thread:" << endl;
  for(int i = 0; i < 100; i++){
    mu.lock();
    cout << "thread-" << i << endl;
    mu.unlock();
  }
}

int main(){
  thread t1(print);
  t1.detach();
  if(t1.joinable()) t1.join();

  cout << "From main:" << endl;
  for(int i = 0; i < 100; i++){
    mu.lock();
    cout << "main-" << i << endl;
    mu.unlock();
  }

  return 0;
}
