/**
 *  Algorithm: Bubble sort
 *  Time Complexity: O(n^2) - worst case, O(n) - best case
 *
 *  In bubble sort we will check elements in a pair and swap them if they are
 *  in the wrong order. Until the array is sorted.
 *
 *  In every itteration the sorted element will be at the end of the array.
 */
#include <stdio.h>
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubble_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; ++i) {
    int swapped = 0;

    for (int j = 0; j < n - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
        swapped = 1;
      }
    }

    if (swapped == 0) {
      break;
    }
  }
}

void bubble_sort_recursive(int *arr, int n) {
  if (n == 1) {
    return;
  }

  for (int i = 0; i < n - 1; ++i) {
    if (arr[i] > arr[i + 1]) {
      swap(&arr[i], &arr[i + 1]);
    }
  }

  bubble_sort_recursive(arr, n - 1);
}

int main() {
  int arr[] = {33, 23, 12, 13, 1};
  bubble_sort_recursive(arr, 5);

  for (int i = 0; i < 5; ++i) {
    printf("%d ", arr[i]);
  }
  return 0;
}
