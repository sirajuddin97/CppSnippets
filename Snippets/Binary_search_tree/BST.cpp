#include "BST.h"

Node::Node(int d){
  data = d;
  left = nullptr;
  right = nullptr;
}

BST::BST(){
  size = 0;
  root = nullptr;
}

void BST::add_node(int d){
  root = add_node(d, root);
}

Node* BST::add_node(int d, Node* r){
  if(r == nullptr) return new Node(d);
  if(d < r->data) r->left = add_node(d, r->left);
  if(d >= r->data) r->right = add_node(d, r->right);
  return r;
}

void BST::search_node(int d){
  search_node(d, root);
}

void BST::search_node(int d, Node* r){
  if(r == nullptr) return;
  if(d == r->data) cout << "Node found! Data: " << r->data << endl;
  if(d <= r->data) search_node(d, r->left);
  if(d > r->data) search_node(d, r->right);
}

void BST::print_all(){
  cout << "All nodes in tree: ";
  print_all(root);
  cout << endl;
}

void BST::print_all(Node* r){
  if(r == nullptr) return;
  cout << r->data << " ";
  print_all(r->left);
  print_all(r->right);
}
