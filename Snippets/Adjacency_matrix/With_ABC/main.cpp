#include <iostream>
#include <string>
using namespace std;

struct Vertex{
  Vertex(int i, char d) : index(i), data(d){}
  int index;
  char data;
};

class ABCMatrix{
public:
  void addEdge(Vertex*, Vertex*);
  void checkEdge(Vertex*, Vertex*);
  void printMatrix();
  void setFalse();

private:
  static const int rows = 5;
  static const int cols = 5;
  bool matrix[rows][cols];
};

int main(){
  ABCMatrix m;
  m.setFalse();

  Vertex* A = new Vertex(0, 'A');
  Vertex* B = new Vertex(1, 'B');
  Vertex* C = new Vertex(2, 'C');
  Vertex* D = new Vertex(3, 'D');
  Vertex* E = new Vertex(4, 'E');

  m.addEdge(A, B);
  m.addEdge(B, C);
  m.addEdge(B, D);
  m.addEdge(C, D);
  m.addEdge(C, E);

  m.checkEdge(A, B);
  m.checkEdge(C, E);
  m.checkEdge(C, A);
  m.checkEdge(E, A);

  m.printMatrix();
  return 0;
}

void ABCMatrix::addEdge(Vertex* v1, Vertex* v2){
  matrix[v1->index][v2->index] = true;
  matrix[v2->index][v1->index] = true;
}

void ABCMatrix::checkEdge(Vertex* v1, Vertex* v2){
  if(matrix[v1->index][v2->index] == true){
    cout << "There is an edge between vertex " << v1->data << " and " << v2->data << "." << endl;
  }
  else{
    cout << "No edge between vertex " << v1->data << " and " << v2->data << "." << endl;
  }
}

void ABCMatrix::printMatrix(){
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      cout << matrix[i][j] << "\t";
    }
    cout << endl;
  }
}

void ABCMatrix::setFalse(){
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      matrix[i][j] = false;
    }
  }
}
