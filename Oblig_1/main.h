#include <iostream>
#include <string>

class Commands{
public:
  class invalid_cmd{};
  void start();
  void help();
  void clear();
  void exit();
};

class Queue{
public:
  class out_of_range{};
  class empty_queue{};
  class invalid_input{};

  void enqueue();
  void dequeue();
  void front();
  void psize();
  bool is_full();
  bool is_empty();
  int size();

private:
  static const int max_size = 5;
  int qu_array[max_size];
  int counter = 0;
  int head = 0;
  int tail = 0;
};
