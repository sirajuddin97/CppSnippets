#include "main.h"

void Commands::start(){
  std::string input;
  std::cout << "> Enter a command: ";
  std::cin >> input;

  static Queue qu;
  if(input == "help" || input == "cmds") help();
  else if(input == "clear" || input == "cls") clear();
  else if(input == "exit" || input == "quit") exit();
  else if(input == "enqueue" || input == "en") qu.enqueue();
  else if(input == "dequeue" || input == "de") qu.dequeue();
  else if(input == "front" || input == "peek") qu.front();
  else if(input == "size" || input == "psize") qu.psize();
  else throw invalid_cmd();
}

void Commands::help(){
  std::cout << "Available commands: enqueue, dequeue, front, clear, size, help, exit" << "\n\n";
}

void Commands::clear(){
  system("clear");
}

void Commands::exit(){
  exit();
}
