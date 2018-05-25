#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Vertex{
  Vertex(int i, char d) : index(i), data(d){}
  int index;
  char data;
  vector<int> vec;
};

class AdjList{
public:
  void addEdge(Vertex*, Vertex*);
  void checkEdge(Vertex*, Vertex*);
};

int main(){
  Vertex* A = new Vertex(0, 'A');
  Vertex* B = new Vertex(1, 'B');
  Vertex* C = new Vertex(2, 'C');
  Vertex* D = new Vertex(3, 'D');
  Vertex* E = new Vertex(4, 'E');

  AdjList a;
  a.addEdge(A, B);
  a.addEdge(B, A);
  a.addEdge(B, C);
  a.addEdge(B, D);
  a.addEdge(C, E);
  a.addEdge(C, D);
  a.addEdge(C, B);
  a.addEdge(D, B);
  a.addEdge(D, C);
  a.addEdge(E, C);

  a.checkEdge(A, B);
  a.checkEdge(B, A);
  a.checkEdge(D, E);
  a.checkEdge(A, E);
  return 0;
}

void AdjList::addEdge(Vertex* v1, Vertex* v2){
  v1->vec.push_back(v2->index);
}

void AdjList::checkEdge(Vertex* v1, Vertex* v2){
  bool found = false;
  for(int i = 0; i < v1->vec.size(); i++){
    if(v1->vec[i] == v2->index) found = true;
  }

  if(found == true) cout << "There is an edge between vertex " << v1->data << " and " << v2->data << ".\n";
  else cout << "No edge between vertex " << v1->data << " and " << v2->data << ".\n";
}
