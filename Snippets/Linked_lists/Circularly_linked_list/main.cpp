#include "main.h"

int main(){
  LinkedList cll;
  cll.add_front(10);
  cll.add_front(20);
  cll.add_front(30);
  cll.add_front(40);
  cll.add_front(50);
  cll.add_back(60);
  cll.add_back(70);

  cout << "All data:" << endl;
  cll.print_all();

  cout << endl << "5-times loop:" << endl;
  cll.print_loop();
  return 0;
}
