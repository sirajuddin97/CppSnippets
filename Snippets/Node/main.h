#include <iostream>
#include <string>
using namespace std;

class empty_list{};

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
  ~LinkedList();
  bool is_empty();
  int get_size();
  int front();
  void add_front(int);
  void add_back(int);
  void print_all();

private:
  Node* head;
  int size;
};
