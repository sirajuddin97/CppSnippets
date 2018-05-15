// #include "main.h"

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
  tail = nullptr;
  size = 0;
}

LinkedList::~LinkedList(){
  while(!is_empty()){
    remove_front();
  }
}

bool LinkedList::is_empty(){
  return size == 0;
}

void LinkedList::add_front(int d){
  if(is_empty()){
    Node* newNode = new Node(d, nullptr);
    head = newNode;
    tail = newNode;
    size++;
  }
  else{
    Node* newNode = new Node(d, head);
    Node* temp = head;
    for(int i = 0; i < size; i++){
      if(temp != tail){
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

void LinkedList::add_back(int d){
  if(is_empty()){
    add_front(d);
  }
  else{
    Node* newNode = new Node(d, head);
    Node* temp = head;
    for(int i = 0; i < size; i++){
      if(temp != tail){
        temp = temp->get_next();
      }
      else{
        temp->set_next(newNode);
      }
    }
    tail = newNode;
    size++;
  }
}

void LinkedList::remove_front(){
  if(!is_empty()){
    Node* temp = head;
    head = head->get_next();
    delete temp;
    size--;
  }
}

void LinkedList::print_all(){
  if(!is_empty()){
    Node* temp = head;
    for(int i = 0; i < size; i++){
      cout << temp->get_data() << " ";
      if(temp != tail){
        temp = temp->get_next();
      }
    }
    cout << endl;
  }
}

void LinkedList::print_loop(){
  if(!is_empty()){
    for(int i = 0; i < 5; i++){
      print_all();
    }
  }
}
