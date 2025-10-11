#include <bits/stdc++.h>
using namespace std;

template <typename T> class Node {
public:
  T data;
  Node<T> *next;

  Node(T initial_value) {
    data = initial_value;
    next = nullptr;
  }

  Node(T initial_value, Node<T> *ptr_to_next_node) {
    data = initial_value;
    next = ptr_to_next_node;
  }
};

int main() {
  Node<int> *head = new Node(10);

  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);

  Node<int> *ptr = head;
  while (ptr != nullptr) {
    cout << ptr->data << endl, ptr = ptr->next;
  }

  return 0;
}
