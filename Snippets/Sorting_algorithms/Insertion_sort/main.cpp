#include <iostream>
#include <string>
using namespace std;

static const int length = 10;

void print_list(int list[]){
  cout << "\t";
  for(int i = 0; i < length; i++){
    cout << list[i] << " ";
  }
  cout << endl;
}

void swap_int(int& i1, int& i2){
  int tmp = i1;
  i1 = i2;
  i2 = tmp;
}

void insertion_sort(int list[]){
  for(int i = 0; i < length; i++){
    int j = i;
    while((j > 0) && (list[j] < list[j-1])){
      swap_int(list[j], list[j-1]);
      j--;
    }
  }
}

int main(){
  int list[] = {3, 1, 2, 5, 6, 33, 5, 29, 1, 4};

  cout << "Unsorted list: ";
  print_list(list);
  insertion_sort(list);
  cout << "Sorted list: ";
  print_list(list);

  return 0;
}
