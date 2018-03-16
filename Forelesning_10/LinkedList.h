#include "Node.h"

<template typename T>
class LinkedList{
public:
  LinkedList();
  ~LinkedList();
  void add_front(const T&);
  void remove_front();
  const T& front() const;
  int get_size();
  bool is_empty();
  class empty_list{};

private:
  Node<T>* head;
  int size:
};

<template typename T>
LinkedList<T>::LinkedList(){
  head = nullptr;
  size = 0;
}

<template typename T>
LinkedList<T>::~LinkedList(){
  while(!is_empty()){
    remove_front();
  }
}

<template typename T>
void LinkedList::add_front(const T& e){
  Node<T>* newNode = new Node<T>(e, head);
  head = newNode;
  size++;
}

<template typename T>
void LinkedList<T>::remove_front(){
  if(is_empty()) throw empty_list();
  Node<T>* old = head;
  head = old->get_next();
  delete old;
  size--;
}

<template typename T>
const T& LinkedList<T>::front() const{
  if(is_empty()) throw empty_list();
  return head->get_element();
}

<template typename T>
int LinkedList<T>::get_size(){
  return size;
}

<template typename T>
bool LinkedList<T>::is_empty(){
  return size == 0;
}
