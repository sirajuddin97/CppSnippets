#include <iostream>
#include <string>
using namespace std;

struct Node{
  Node(int, Node*, Node*);
  int data;
  Node* next;
  Node * prev;
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
