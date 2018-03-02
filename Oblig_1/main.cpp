#include "main.h"

int main(){
  try{
    Commands cmd;
    cmd.start();
  }
  catch(Commands::invalid_cmd){
    std::cerr << "Error: Invalid command. Type 'help' to see all commands!" << "\n\n";
  }
  catch(Queue::out_of_range){
    std::cerr << "Error: The queue is full (max size reached)!" << "\n\n";
  }
  catch(Queue::empty_queue){
    std::cerr << "Error: The queue is empty!" << "\n\n";
  }
  catch(Queue::invalid_input){
    std::cerr << "Error: Only integers are allowed. Try again!" << "\n\n";
    std::cin.clear();
    std::cin.ignore(10000, '\n');
  }
  catch(...){
    std::cerr << "Error: Something is wrong!" << "\n\n";
  }
  main();
}
