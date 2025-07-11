#include <iterator>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int arr[] = {5, 1, 4, 2};

  /**
   * Bubble Sort: Continually compare adjacent elements and swap them
   *
   * if ascending order: swap the largest to end
   * if descending order: swap the smallest to end
   *
   * I1: [5, 1, 4, 2] -> [1, 4, 2, 5]
   *
   * we can observe that in first itteration we swap the largest element to end
   * and in every next itteration we swap the next largest element to end. 🤯
   *
   * and in the second loop we are reducing the no of unwanted itterations cause
   * we know that the largest element is already at the end
   */
  for (size_t i = 0; i < std::size(arr) - 1; ++i) {
    bool swapped = false;

    for (size_t j = 0; j < std::size(arr) - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
        bool swapped = true;
      }
    }

    /* if there is no swap then the array is sorted  we will break the loop */
    if (!swapped)
      break;
  }

  return 0;
}
