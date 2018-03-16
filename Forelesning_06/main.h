#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

void write_two_ints(string filename, int x, int y);
void read_two_ints(string filename, int& x, int& y);
void fill_vector(istream& ist, vector<int>& v, const char terminator);
void read_file(vector<int>& v, char terminator);
void read_user_input(vector<int>& v, char terminator);
void write_to_file(vector<int>& v, char terminator);
