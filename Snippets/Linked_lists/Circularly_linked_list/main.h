#include <iostream>
#include <string>
using namespace std;

class Node{
public:
  Node(int, Node*);
  int get_data();
  Node* get_next();
  void set_next(Node*);

private:
  int data;
  Node* next;
};

class LinkedList{
public:
  LinkedList();
  ~LinkedList();
  bool is_empty();
  void add_front(int);

private:
  Node* head;
  int size;
};
