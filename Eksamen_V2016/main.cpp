// Eksamen V2016, Oppgave 1a
#include "Queue.h"

int main(){
  try{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.print_first();
  }
  catch(full_queue){
    cerr << "The queue is full!" << endl;
  }
  catch(empty_queue){
    cerr << "The queue is empty!" << endl;
  }
  return 0;
}
