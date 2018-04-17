#include "Queue.h"

Node::Node(D d, Node* n){
  data = d;
  next = n;
}

Queue::Queue(){
  front = nullptr;
  back = nullptr;
  size = 0;
}

Queue::~Queue(){
  // slette ting
}
