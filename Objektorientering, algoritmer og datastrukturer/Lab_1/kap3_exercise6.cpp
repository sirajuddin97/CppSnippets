// Lab_1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;

  vector<int> list;
  cout << "Enter your first integer value: ";
  cin >> num1;
  list.push_back(num1);

  cout << "Enter your second integer value: ";
  cin >> num2;
  list.push_back(num2);

  cout << "Enter your third integer value: ";
  cin >> num3;
  list.push_back(num3);
  sort(list.begin(), list.end());

  cout << "Original numbers: " << num1 << ", " << num2 << ", " << num3 << endl;
  cout << "Sorted numbers: ";
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
