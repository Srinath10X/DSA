#include <bits/stdc++.h>
using namespace std;

class MinHeap {
public:
  void insert(int value) {
    heap.push_back(value);
    heapifyUp(heap.size() - 1);
  }

  int extractMin() {
    if (heap.empty()) {
      return -1;
    }

    int min_value = heap[0];
    heap[0] = heap.back();
    heap.pop_back();

    heapifyDown(0);

    return min_value;
  }

  void buildHeap(vector<int> &nums) {
    heap = nums;

    for (int i = nums.size() / 2 - 1; i >= 0; --i) {
      heapifyDown(i);
    }
  }

  void deleteKey(int i) {
    decreaseKey(i, INT_MIN);
    extractMin();
  }

  void decreaseKey(int i, int new_value) {
    heap[i] = new_value;
    heapifyUp(i);
  }

  bool isempty() { return heap.empty(); }

  int getMin() { return heap.empty() ? -1 : heap[0]; }

private:
  vector<int> heap;

  int left(int i) { return 2 * i + 1; }
  int right(int i) { return 2 * i + 2; }
  int parent(int i) { return (i - 1) / 2; }

  void heapifyUp(int i) {
    while (i > 0 && heap[parent(i)] > heap[i]) {
      swap(heap[parent(i)], heap[i]), i = parent(i);
    }
  }

  void heapifyDown(int i) {
    int smallest = i;

    int left_idx = left(i);
    int right_idx = right(i);

    if (left_idx < heap.size() && heap[left_idx] < heap[smallest]) {
      smallest = left_idx;
    }

    if (right_idx < heap.size() && heap[right_idx] < heap[smallest]) {
      smallest = right_idx;
    }

    if (smallest != i) {
      swap(heap[i], heap[smallest]), heapifyDown(smallest);
    }
  }
};

class MaxHeap {
public:
  void insert(int value) {
    heap.push_back(value);
    heapifyUp(heap.size() - 1);
  }

  int getMax() { return heap.empty() ? -1 : heap[0]; }

  int extractMax() {
    if (heap.empty()) {
      return -1;
    }

    int max_value = heap[0];
    heap[0] = heap.back();
    heap.pop_back();

    heapifyDown(0);

    return max_value;
  }

  void deleteKey(int i) {
    increaseKey(i, INT_MAX);
    extractMax();
  }

  void increaseKey(int i, int new_value) {
    heap[i] = new_value;
    heapifyUp(i);
  }

  int size() { return heap.size(); }
  bool empty() { return heap.empty(); }

private:
  vector<int> heap;

  int left(int i) { return 2 * i + 1; }
  int right(int i) { return 2 * i + 2; }
  int parent(int i) { return (i - 1) / 2; }

  void heapifyUp(int i) {
    while (i > 0 && heap[parent(i)] < heap[i]) {
      swap(heap[parent(i)], heap[i]), i = parent(i);
    }
  }

  void heapifyDown(int i) {
    int largest = i;

    int left_idx = left(i);
    int right_idx = right(i);

    if (left_idx < heap.size() && heap[left_idx] > heap[largest]) {
      largest = left_idx;
    }

    if (right_idx < heap.size() && heap[right_idx] > heap[largest]) {
      largest = right_idx;
    }

    if (largest != i) {
      swap(heap[i], heap[largest]), heapifyDown(largest);
    }
  }
};
