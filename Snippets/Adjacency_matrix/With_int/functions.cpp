#include "Graph.h"

void AdjMatrix::setFalse(){
  for(int i = 0; i < rows; i++){
    matrix[i][i] = false;
  }
}

void AdjMatrix::addEdge(Vertex* row, Vertex* col){
  matrix[row->data][col->data] = true;
  matrix[col->data][row->data] = true;
}

void AdjMatrix::printMatrix(){
  cout << "Adjacency matrix:" << endl;
  for(int i = 1; i < rows+1; i++){
    for(int j = 1; j < cols+1; j++){
      cout << matrix[i][j] << "\t";
    }
    cout << endl;
  }
}

void AdjMatrix::checkEdge(Vertex* row, Vertex* col){
  if(matrix[row->data][col->data] == true){
    cout << "There is an edge between vertex " << row->data << " and " << col->data << ".\n";
  }
  else{
    cout << "No edge between vertex " << row->data << " and " << col->data << ".\n";
  }
}
