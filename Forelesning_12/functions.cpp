#include "main.h"

BT::BT(){
  root = nullptr;
}

BT::~BT(){

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
