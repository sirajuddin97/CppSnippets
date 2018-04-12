#include "main.h"

int main(){
  try{
    LinkedList li;
    li.add_back(1);
    li.add_back(2);
    li.add_back(3);
    li.add_front(4);
    li.add_front(5);
    li.print_all();
  }
  catch(empty_list){
    cerr << "No nodes found (empty list)." << endl;
  }

  return 0;
}
