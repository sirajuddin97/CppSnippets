#include <iostream>
using namespace std;

void print(int list[], int size){
  for(int i = 0; i < size; i++) {
    cout << list[i] << " ";
  }
  cout << endl;
}

void merge(int list[], int low, int mid, int high){
  int length = (high-low)+1;
	int* tmp_arr = new int[length];

  int x = 0;
	int i = low;
	int j = mid+1;

  while(i <= mid && j <= high){
    if(list[i] < list[j]){
      tmp_arr[x] = list[i];
      i++;
      x++;
    }
    else{
      tmp_arr[x] = list[j];
      j++;
      x++;
    }
  }

  while(i <= mid){
    tmp_arr[x] = list[i];
    i++;
    x++;
  }

  while(j <= high){
    tmp_arr[x] = list[j];
    j++;
    x++;
  }

  for(int k = 0; k < length; k++){
    list[low + k] = tmp_arr[k];
  }
  delete tmp_arr;
}

void merge_sort(int list[], int size, int low, int high){
  // hvordan fungerer rekursjon her??
  if(low == high) return;
  int mid = (low+high)/2;
  merge_sort(list, size, low, mid);
  merge_sort(list, size, mid+1, high);
  merge(list, low, mid, high);
}

void merge_sort(int list[], int size){
  merge_sort(list, size, 0, size-1);
}

int main(){
  const int size = 9;
  int list[size] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
  merge_sort(list, size);
  print(list, size);
  return 0;
}
