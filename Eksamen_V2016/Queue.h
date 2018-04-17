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
  void enqueue(D);
  void dequeue();
  void print_first();
  void print_all();

private:
  Node* front;
  Node* back;
  int size;
  static const int max_size = 10;
};

class full_queue{};
class empty_queue{};
