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

LinkedList::~LinkedList(){
  
}

int LinkedList::get_size(){
  return size;
}

bool LinkedList::is_empty(){
  if(size == 0) return true;
  else return false;
}

void LinkedList::add_front(int n){
  Node* newNode = new Node(n, head);
  head = newNode;
  size++;
}

void LinkedList::add_back(int n){
  // ikke ferdig
}

int LinkedList::front(){
  if(!is_empty()){
    return head->get_data();
  }
  else throw empty_list();
}

void LinkedList::print_all(){
  if(!is_empty()){
    Node* temp = head;
    for(int i = 0; i < size; i++){
      cout << temp->get_data() << endl;
      temp = temp->get_next();
    }
  }
  else throw empty_list();
}
