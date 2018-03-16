#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Node{
public:
  Node(T, Node<T>*);
  T get_element() const;
  Node<T>* get_next() const;

private:
  T element;
  Node<T>* next;
};

template <typename T>
Node<T>::Node(T el, Node<T>* nxt){
  element = el;
  next = nxt;
}

template <typename T>
T Node<T>::get_element() const{
  return element;
}

template <typename T>
  Node<T>* Node<T>::get_next() const{
  return next;
}
