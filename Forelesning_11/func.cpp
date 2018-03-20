#include "main.h"

void fill(int arr[], int len){
  for(int i = 0; i < len; i++){
    arr[i] = rand() % 100;
  }
}

void print(int arr[], int len){
  for(int i = 0; i < len; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

void selection_sort(int arr[], int len){
  for(int i = 0; i < len-1; i++){
    int min = i;
    for(int j = i+1; j < len; j++){
      if(arr[j] < arr[min]) min = j;
    }
    swap(arr[min], arr[i]);
  }
}
