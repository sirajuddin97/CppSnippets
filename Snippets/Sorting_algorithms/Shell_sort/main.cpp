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

void shell_sort(int list[]){
  int gap = length/2;
  while(gap > 0){
    insertion_sort(list, gap);
    gap = gap/2;
  }
}

void insertion_sort(int list[], int gap){
  for(int i = gap; i < length; i++){
    int j = i;
    while((j >= gap) && (list[j] < list[j-gap])){
      swap_int(list[j], list[j-gap]);
      j = j-gap;
    }
  }
}

int main(){
  int list[] = {3, 1, 2, 5, 6, 33, 5, 29, 1, 4};

  cout << "Unsorted list: ";
  print_list(list);
  shell_sort(list);
  cout << "Sorted list: ";
  print_list(list);

  return 0;
}
