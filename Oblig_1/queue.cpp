#include "main.h"

void Queue::enqueue(){
  if(!is_full()){
    system("clear");
    std::cout << ">> Enter an integer: ";
    int number = 0;
    std::cin >> number;
    if(!std::cin) throw invalid_input();

    qu_array[head] = number;
    head++;
    counter++;
    std::cout << "Added " << number << " to the queue." << "\n\n";
  }
}

void Queue::dequeue(){
  if(!is_empty()){
    if(tail == max_size) tail = 0;

    int element = qu_array[tail];
    std::cout << "Popped " << element << " from queue." << "\n\n";
    tail++;
    counter--;
  }
}

void Queue::front(){
  if(!is_empty()){
    std::cout << "The first element in the queue is " << qu_array[tail] << ".\n\n";
  }
}

int Queue::size(){
  return counter;
}

void Queue::psize(){
  if(!is_empty()){
    std::cout << "Total items in the queue: " << size() << " (max size: " << max_size << "). "<< "\n\n";
  }
}

bool Queue::is_full(){
  if(counter >= max_size){
    head = 0;
    throw out_of_range();
  }
  return false;
}

bool Queue::is_empty(){
  if(counter == 0) throw empty_queue();
  return false;
}
