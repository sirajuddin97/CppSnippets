#include <iostream>
#include <string>
#include <thread>
#include <mutex>
using namespace std;

static mutex mu;
// void print_numbers();
void print_numbers(int);
