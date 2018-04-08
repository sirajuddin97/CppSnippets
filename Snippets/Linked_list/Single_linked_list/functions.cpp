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

void Node::set_next(Node* newNode){
  next = newNode;
}

// ------------------------------------------

LinkedList::LinkedList(){
  head = nullptr;
  size = 0;
}

LinkedList::~LinkedList(){
  remove_all();
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
  if(is_empty()){
    add_front(n);
  }
  else{
    Node* temp = head;
    for(int i = 0; i < size; i++){
      if(temp->get_next() != nullptr){
        temp = temp->get_next();
      }
      else{
        Node* newNode = new Node(n, nullptr);
        temp->set_next(newNode);
        size++;
      }
    }
  }
}

void LinkedList::remove_front(){
  if(!is_empty()){
    Node* temp = head->get_next();
    delete head;
    head = temp;
    size--;
  }
  else throw empty_list();
}

void LinkedList::remove_all(){
  while(!is_empty()){
    remove_front();
  }
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
