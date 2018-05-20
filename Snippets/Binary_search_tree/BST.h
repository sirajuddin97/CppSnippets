#include <iostream>
#include <string>
using namespace std;

struct Node{
  Node(int);
  int data;
  Node* left;
  Node* right;
};

class BST{
public:
  BST();
  void add_node(int);
  Node* add_node(int, Node*);
  void search_node(int);
  void search_node(int, Node*);
  void print_all();
  void print_all(Node*);

private:
  int size;
  Node* root;
};
