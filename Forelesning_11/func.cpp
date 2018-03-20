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

void insertion_sort(int arr[], int len){
  for(int i = 1; i < len; i++){
    int j = i;
    while(j > 0 && arr[j] < arr[j-1]){
      swap(arr[j], arr[j-1]);
      j--;
    }
  }
}
