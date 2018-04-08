#include "main.h"

int main(){
  try{
    LinkedList li;
    li.add_front(1);
    li.add_front(2);
    li.add_front(3);
    li.add_front(4);
    li.add_front(5);
    li.print_all();

    cout << endl;
    li.remove_front();
    li.print_all();

    cout << endl;
    li.remove_all();
    li.print_all();
  }
  catch(empty_list){
    cerr << "No nodes found (empty list)." << endl;
  }
  return 0;
}
