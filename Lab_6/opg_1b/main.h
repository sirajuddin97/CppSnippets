#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class WordReplacer{
public:
  void openFile();
  void replaceText();
  void saveFile();

private:
  string filename = "text.txt";
  string numbers[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
};
