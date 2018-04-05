#include <iostream>
#include <string>
using namespace std;

class Node{
public:
  Node(int, Node*);
  int get_data();
  Node* get_next();

private:
  int data;
  Node* next;
};

class LinkedList{
public:
  LinkedList();
  void add_front(int);
  bool is_empty();
  int get_size();

private:
  Node* head;
  int size;
};
