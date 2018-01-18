// Lab_1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  string name1;
  string name2;
  string name3;

  vector<string> list;
  cout << "Enter the first name: ";
  cin >> name1;
  list.push_back(name1);

  cout << "Enter the seocnd name: ";
  cin >> name2;
  list.push_back(name2);

  cout << "Enter the third name: ";
  cin >> name3;
  list.push_back(name3);
  sort(list.begin(), list.end());

  cout << "Original names: " << name1 << ", " << name2 << ", " << name3 << endl;
  cout << "Sorted names: ";
  for(int i = 0; i < list.size(); i++){
    cout << list[i];

    if(i < (list.size()-1)){
      cout << ", ";
    }
  }
  cout << endl;

  char ch; cin>>ch;
  return 0;
}
