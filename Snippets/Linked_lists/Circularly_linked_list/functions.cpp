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

void Node::set_next(Node* n){
  next = n;
}

// -----------------------------------------

LinkedList::LinkedList(){
  head = nullptr;
  size = 0;
}

LinkedList::~LinkedList(){
  // slette ting her etterpå
}

bool LinkedList::is_empty(){
  return size == 0;
}

void LinkedList::add_front(int d){
  if(is_empty()){
    Node* newNode = new Node(d, nullptr);
    head = newNode;
    size++;
  }
  else{
    Node* newNode = new Node(d, head);
    Node* temp = head;
    for(int i = 0; i < size; i++){
      if(temp->get_next() != nullptr){
        temp = temp->get_next();
      }
      else{
        temp->set_next(newNode);
      }
    }
    head = newNode;
    size++;
  }
}
