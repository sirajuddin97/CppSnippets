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
  insertion_sort(arr, len, 1);
}

void insertion_sort(int arr[], int len, int gap){
  for(int i = 1; i < len; i++){
    int j = i;
    while(j >= gap && arr[j] < arr[j - gap]){
      swap(arr[j], arr[j - gap]);
      j = j - gap;
    }
  }
}

void shell_sort(int arr[], int len){
  int gap = len / 2;
  while(gap > 0){
    insertion_sort(arr, len, gap);
    gap = gap/2;
  }
}

void merge_sort(int arr[], int len){
  merge_sort(array, len, 0, len-1);
}

void merge_sort(int arr[], int len, int low, int high){
  int mid = low + (high-low)/2;
  merge_sort(arr, len, low, mid);
  merge_sort(arr, len, mid+1, high);
}
