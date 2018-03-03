#include "main.h"

void Commands::start(){
  std::string input;
  std::cout << "> Enter a command: ";
  std::cin >> input;

  static Queue qu;
  if(input == "help") help();
  else if(input == "clear") clear();
  else if(input == "exit") exit();
  else if(input == "enqueue" || input == "en") qu.enqueue();
  else if(input == "dequeue" || input == "de") qu.dequeue();
  else if(input == "front") qu.front();
  else if(input == "size") qu.size();
  else throw invalid_cmd();
}

void Commands::help(){
  std::cout << "Commands: enqueue, dequeue, front, clear, size, help, exit" << "\n\n";
}

void Commands::clear(){
  system("clear");
}

void Commands::exit(){
  exit();
}
