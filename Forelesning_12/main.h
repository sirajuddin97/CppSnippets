#include <iostream>
#include <string>
using namespace std;

struct BTNode{
  int value;
  BTNode* left;
  BTNode* right;
  BTNode(int v) : value(v), left(nullptr), right(nullptr){}
};

class BT{
public:
  BT();
  ~BT();
  void insert(int);
  BTNode* search(int);

private:
  BTNode* insert(BTNode*, int);
  BTNode* search(BTNode*, int);
  BTNode* root;
};
