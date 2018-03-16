#include "main.h"

int main(){
  cout << integer_min(59, 999) << endl;
  cout << generic_min(65, 99) << endl;
  cout << generic_min('t', 'R') << endl;

  Stack<int> s;
  s.push(87);
  cout << s.top() << endl;
  s.tall = "hei";
  cout << "K er: " << s.tall << endl;

  Stack<string> s2;
  s2.push("Text1");
  s2.push("Text2");
  cout << "Popped " << s2.pop() << endl;

  return 0;
}
