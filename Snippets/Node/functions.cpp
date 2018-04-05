#include "main.h"

Node::Node(int d, Node* n){
  data = d;
  next = n;
}

int Node::get_data(){
  return data;
}

Node* Node::get_next(){
  return next;
}

// ------------------------------------------

LinkedList::LinkedList(){
  head = nullptr;
  size = 0;
}

bool LinkedList::is_empty(){
  if(size == 0) return true;
  else return false;
}

int LinkedList::get_size(){
  return size;
}

void LinkedList::add_front(int n){

}
