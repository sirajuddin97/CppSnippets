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
  class invalid_int{};

  void enqueue();
  void dequeue();
  void front();
  void size();
  bool is_full();
  bool is_empty();

private:
  static const int max_size = 5;
  int qu_array[max_size];
  int counter = 0;
  int en_pos = 0;
  int de_pos = 0;
};
