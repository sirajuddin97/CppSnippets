#include <iostream>
#include <string>
using namespace std;

int integer_min(int a, int b);
template <typename T>
T generic_min(T a, T b){
  if(a < b) return a;
  return b;
}

template <typename T>
class Stack{
public:
  void push(T element){
    if(st_size == 100) cerr << "Push into full stack!" << endl;
    st[st_size] = element;
    st_size++;
  }
  T pop(){
    if(isempty()) cerr << "Pop from empty stack!" << endl;
    T element = st[st_size-1];
    st_size--;
    return element;
  }
  T top(){
    if(isempty()) cerr << "Stack is empty!" << endl;
    return st[st_size-1];
  }
  int size(){
    return st_size;
  }
  bool isempty(){
    return st_size == 0;
  }

private:
  T st[100];
  int st_size = 0;
};
