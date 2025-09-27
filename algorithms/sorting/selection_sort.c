/**
 *  Algorithm: Selection sort
 *
 *  Time Complexity: O(n^2)
 *  Space Complexity: O(1)
 *
 *  In selection sort in every itteration we will find the smallest element
 *  and swap it with the current idx element until n - 1 operations as the
 *  last element will be already swapped and sorted in it's place.
 */
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selection_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; ++i) {
    int min_idx = i;

    for (int j = i + 1; j < n; ++j) {
      if (arr[j] < arr[min_idx]) {
        min_idx = j;
      }
    }

    swap(&arr[i], &arr[min_idx]);
  }
}
