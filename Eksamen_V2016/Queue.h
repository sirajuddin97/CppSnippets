#include <iostream>
#include <string>
using namespace std;

typedef int D;
struct Node{
  Node(D, Node*);
  D data;
  Node* next;
};

class Queue{
public:
  Queue();
  ~Queue();

private:
  Node* front;
  Node* back;
  int size;
};
