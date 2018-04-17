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
  // feilen ligger her. pga nullptr i enqueue funksjon
  while(size != 0){
    Node* temp = back;
    back = back->next;
    delete temp;
    size--;
  }
}

void Queue::enqueue(D d){
  if(size == max_size) throw full_queue();
  if(size == 0){
    Node* newNode = new Node(d, nullptr);
    front = newNode;
    back = newNode;
    size++;
  }
  else{
    Node* newNode = new Node(d, front);
    front = newNode;
    size++;
  }
}

void Queue::print_first(){
  if(size != 0){
    cout << "Front element: " << back->data << endl;
  }
  else throw empty_queue();
}

void Queue::print_all(){
  if(size != 0){
    Node* temp = back;
    for(int i = 0; i < size; i++){
      cout << temp->data << " ";
      temp = temp->next;
    }
  }
  else throw empty_queue();
}
