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
  // delete
}

bool LinkedList::is_empty(){
  return size == 0;
}

void LinkedList::add_front(int d){
  if(is_empty()){
    Node* newNode = new Node(d, head, nullptr);
    head = newNode;
    size++;
  }
  else{
    Node* newNode = new Node(d, head, nullptr);
    head->prev = newNode;
    head = newNode;
    size++;
  }
}

void LinkedList::add_back(int d){
  if(is_empty()){
    add_front(d);
  }
  else{
    Node* temp = head;
    for(int i = 0; i < size; i++){
      if(temp->next == nullptr){
        Node* newNode = new Node(d, nullptr, temp);
        temp->next = newNode;
        size++;
      }
      else{
        temp = temp->next;
      }
    }
  }
}

void LinkedList::print_front(){
  if(!is_empty()){
    cout << head->data << endl;
  }
  else throw empty_list();
}

void LinkedList::print_all(){
  if(!is_empty()){
    Node* temp = head;
    for(int i = 0; i < size; i++){
      cout << temp->data << endl;
      temp = temp->next;
    }
  }
  else throw empty_list();
}
