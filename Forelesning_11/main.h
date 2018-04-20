#include <iostream>
#include <string>
#include <thread>
using namespace std;

void fill(int[], int);
void print(int[], int);
void selection_sort(int[], int);
void insertion_sort(int[], int);
void insertion_sort(int[], int, int);
void shell_sort(int[], int);
void swap(int[], int[]);
void merge_sort(int[], int, bool);
void merge_sort(int[], int, int, int);
void th_merge_sort(int[], int, int, int);

const static int length = 1000;
static int array[length];
