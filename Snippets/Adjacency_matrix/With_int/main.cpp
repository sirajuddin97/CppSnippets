#include "Graph.h"

int main(){
  AdjMatrix mat;
  mat.setFalse();

  Vertex* v1 = new Vertex(1);
  Vertex* v2 = new Vertex(2);
  Vertex* v3 = new Vertex(3);
  Vertex* v4 = new Vertex(4);
  Vertex* v5 = new Vertex(5);

  mat.addEdge(v1, v4);
  mat.addEdge(v2, v4);
  mat.addEdge(v2, v5);
  mat.addEdge(v3, v5);
  mat.addEdge(v5, v4);

  mat.printMatrix();
  mat.checkEdge(v1, v4);
  mat.checkEdge(v5, v4);
  mat.checkEdge(v1, v3);
  return 0;
}
