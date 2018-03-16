#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Stack{
public:
  void push(int n);
  int pop();
  int top();
  int size();
  bool is_empty();

private:
  static const int max_size = 100;
  int st[max_size];
  int st_size = 0;
};
