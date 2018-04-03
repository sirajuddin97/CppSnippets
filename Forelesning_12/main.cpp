#include "main.h"

int main(){
  BT mytree;
  mytree.insert(5);
  mytree.insert(13);
  mytree.insert(57);
  mytree.insert(1);
  BTNode* b1 = mytree.search(5);
  if(b1 != nullptr) cout << "Found " << b1->value << endl;
  return 0;
}
