#include <iostream>
#include <string>
using namespace std;

class empty_list{};

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
  void add_back(int);
  void print_front();
  void print_all();

private:
  Node* head;
  int size;
};
