#include "main.h"

void Queue::enqueue(){
  if(!is_full()){
    if(en_pos == max_size) en_pos = 0;

    std::cout << ">> Enter an integer: ";
    int number; std::cin >> number;
    if(!std::cin) throw invalid_int();

    qu_array[en_pos] = number;
    en_pos++;
    counter++;
    std::cout << "Added " << number << " to the queue." << "\n\n";
  }
}

void Queue::dequeue(){
  if(!is_empty()){
    if(de_pos == max_size) de_pos = 0;

    int number = qu_array[de_pos];
    qu_array[de_pos] = 0;
    std::cout << "Popped " << number << " from the queue." << "\n\n";
    de_pos++;
    counter--;
  }
}

void Queue::front(){
  if(!is_empty()){
    std::cout << "The first element in the queue is " << qu_array[de_pos] << ".\n\n";
  }
}

void Queue::size(){
  std::cout << "\tArray: [";
  for(int i = 0; i < max_size; i++){
    std::cout << qu_array[i];
    if(i < max_size - 1) std::cout << ", ";
  }
  std::cout << "]\n";
  std::cout << "\tUsed size: " << counter << "/" << max_size << "\n";
  std::cout << "\ten_pos: " << en_pos << ", de_pos: " << de_pos << "\n\n";
}

bool Queue::is_full(){
  if(counter == max_size) throw out_of_range();
  else return false;
}

bool Queue::is_empty(){
  if(counter == 0) throw empty_queue();
  else return false;
}
