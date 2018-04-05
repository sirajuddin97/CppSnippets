#include "main.h"

int main(){
  try{
    BT mytree;
    mytree.insert(5);
    mytree.insert(13);
    mytree.insert(57);
    mytree.insert(1);
    mytree.insert(2);
    mytree.insert(77);
    mytree.insert(12);
    mytree.insert(13);
    BTNode* b1 = mytree.search(5);
    if(b1 != nullptr) mytree.remove(b1);
    mytree.printPrefix();
  }
  catch(nullptr_error){
    cerr << "Remove nullptr from tree" << endl;
  }
  catch(node_error){
    cerr << "Node not in tree" << endl;
  }
  return 0;
}
