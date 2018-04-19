#include <iostream>
#include <string>
#include <thread>
#include <mutex>
using namespace std;

void print_numbers();
static mutex mu;
