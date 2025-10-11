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

Node<int> *insertAtHead(Node<int> *head, int value) {
  Node<int> *new_node = new Node(value, head);
  return new_node;
}

Node<int> *insertAtTail(Node<int> *head, int value) {
  Node<int> *ptr = head;
  Node<int> *new_node = new Node(value);

  while (ptr->next != nullptr) {
    ptr = ptr->next;
  }

  ptr->next = new_node;
  return head;
}

int main() {
  Node<int> *head = new Node(10);

  head = insertAtHead(head, 20);

  Node<int> *temp = head;
  while (temp != nullptr) {
    cout << temp->data << " ", temp = temp->next;
  }

  return 0;
}
