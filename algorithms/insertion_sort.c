/**
 * Algorithm: Insertion sort
 * Time Complexity: O(n^2), O(n^2), O(n)
 */
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void insertion_sort(int arr[], int n) {
  for (int i = 1; i < n; ++i) {
    int j = i - 1;
    int key = arr[i];

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j], j--;
    }

    arr[j + 1] = key;
  }
}

void insertion_sort_recursive(int arr[], int i, int n) {
  if (i == n) {
    return;
  }

  int j = i;

  while (j >= 0 && arr[j - 1] > arr[j]) {
    swap(&arr[j], &arr[j - 1]), --j;
  }

  insertion_sort_recursive(arr, i + 1, n);
}
