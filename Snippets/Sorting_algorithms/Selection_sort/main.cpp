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

void selection_sort(int list[]){
  for(int i = 0; i < length-1; i++){
    int min = i;

    for(int j = i+1; j < length; j++){
      if(list[j] < list[min]){
        min = j;
      }
    }
    swap_int(list[i], list[min]);
  }
}

int main(){
  int list[] = {3, 7, 1, 3, 6, 4, 8, 9, 20, 2};

  cout << "Unsorted list: ";
  print_list(list);
  selection_sort(list);
  cout << "Sorted list: ";
  print_list(list);
  return 0;
}
