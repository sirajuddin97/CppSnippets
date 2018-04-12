#include "main.h"

BT::BT(){
  root = nullptr;
}

BT::~BT(){
  destroy_tree(root);
}

void BT::destroy_tree(BTNode* n){
  if(n == nullptr) return;
  destroy_tree(n->left);
  destroy_tree(n->right);
  delete n;
}

void BT::insert(int v){
  root = insert(root, v);
}

BTNode* BT::insert(BTNode* n, int v){
  if(n == nullptr) return new BTNode(v);
  if(v <= n->value) n->left = insert(n->left, v);
  else n->right = insert(n->right, v);
  return n;
}

BTNode* BT::search(int v){
  return search(root, v);
}

BTNode* BT::search(BTNode* n, int v){
  if(n == nullptr) return nullptr;
  if(v == n->value) return n;
  if(v < n->value) return search(n->left, v);
  return search(n->right, v);
}

void BT::remove(BTNode* rem){
  if(rem == nullptr) throw nullptr_error();
  root = remove(root, rem);
}

BTNode* BT::remove(BTNode* n, BTNode* rem){
  if(n == nullptr) throw node_error();
  if(n == rem){
    if(n->left == nullptr){
      BTNode* temp = n->right;
      delete n;
      return temp;
    }
    if(n->right == nullptr){
      BTNode* temp = n->left;
      delete n;
      return temp;
    }
    BTNode* minimum = findMinimum(n->right);
    n->value = minimum->value;
    n->right = remove(n->right, minimum);
  }
  else if(rem->value <= n->value){
    n->left = remove(n->left, rem);
  }
  else{
    n->right = remove(n->right, rem);
  }
  return n;
}

BTNode* BT::findMinimum(BTNode* n){
  if(n->left == nullptr) return n;
  return findMinimum(n->left);
}

void BT::printPrefix(){
  printPrefix(root);
  cout << endl;
}

void BT::printPrefix(BTNode* n){
  if(n == nullptr) return;
  cout << n->value << " ";
  printPrefix(n->left);
  printPrefix(n->right);
}

void BT::printPostfix(BTNode* n){

}

void BT::printInfix(BTNode* n){

}
