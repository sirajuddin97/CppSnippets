#include "BST.h"

int main(){
  BST bt;
  bt.add_node(3);
  bt.add_node(2);
  bt.add_node(1);
  bt.add_node(6);
  bt.search_node(1);
  bt.print_all();
  return 0;
}
