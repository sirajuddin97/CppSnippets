#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Scanner{
public:
  void openFile();
  void editFile();
  void replaceNumber();
  void saveFile();
  
private:
  const string filename = "text.txt";
};

static vector<char> text;
