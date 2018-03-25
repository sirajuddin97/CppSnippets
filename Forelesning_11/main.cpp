#include "main.h"

int main(){
  fill(array, length);
  clock_t start = clock();
  shell_sort(array, length);
  // selection_sort(array, length);
  // insertion_sort(array, length);
  clock_t stop = clock();
  double time = (double)(stop-start)/CLOCKS_PER_SEC*1000.0;
  cout << "Elapsed run time: " << time << "ms" << endl;
  print(array, length);

  return 0;
}
