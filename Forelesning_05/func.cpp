#include "stack.h"

void Stack::push(int n){
  if(st_size == max_size) throw -1;
  st[st_size] = n;
  st_size++;
}

int Stack::pop(){
  if(is_empty()) throw -2;
  int element = st[st_size - 1];
  st_size--;
  return element;
}

int Stack::top(){
  if(is_empty()) throw -3;
  int element = st[st_size - 1];
  return element;
}

int Stack::size(){
  return st_size;
}

bool Stack::is_empty(){
  if(st_size == 0){
    return true;
  }
  else{
    return false;
  }
}
