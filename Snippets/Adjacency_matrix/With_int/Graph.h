#include <iostream>
#include <string>
using namespace std;

struct Vertex{
  Vertex(int d) : data(d) {}
  int data;
};

class AdjMatrix{
public:
  void setFalse();
  void addEdge(Vertex*, Vertex*);
  void checkEdge(Vertex*, Vertex*);
  void printMatrix();
};

static const int rows = 5;
static const int cols = 5;
static bool matrix[rows][cols];
