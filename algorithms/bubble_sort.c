/**
 *  Algorithm: Bubble sort
 *  Time Complexity: O(n^2) - worst case, O(n) - best case
 *
 *  In bubble sort we will check elements in a pair and swap them if they are
 *  in the wrong order. Until the array is sorted.
 *
 *  In every itteration the sorted element will be at the end of the array.
 */
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
