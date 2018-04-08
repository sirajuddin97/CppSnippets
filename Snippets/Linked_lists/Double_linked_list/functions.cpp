#include "main.h"

Node::Node(int d, Node* n, Node* p){
  data = d;
  next = n;
  prev = p;
}

LinkedList::LinkedList(){
  head = nullptr;
  size = 0;
}

LinkedList::~LinkedList(){
  // ikke ferdig
}

bool LinkedList::is_empty(){
  return size == 0;
}

void LinkedList::add_front(int d){
  Node* newNode = new Node(d, head, nullptr);
  head->prev =
  head = newNode;
  size++;
}
