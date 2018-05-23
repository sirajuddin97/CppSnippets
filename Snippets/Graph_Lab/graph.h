#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Edge{
public:
  Edge();

private:
  Vertex* v1;
  Vertex* v2;
};

class Vertex{
public:
  Vertex();

private:
  int data;
  vector<Edge*> e;
};

class Graph{
public:
  Graph();
  void addVertex(int);
  void addEdge(Vertex*, Vertex*);

private:
  vector<Vertex*> v;
};
