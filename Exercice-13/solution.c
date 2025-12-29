#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int value;
  struct Node *next;
} Node;

Node *stack = NULL;

void push(int val) {
  Node *n = malloc(sizeof(Node));
  n->value = val;
  n->next = stack; // ref vers la stack avant maj
  stack = n;       // maj de la stack avec le nouvel el
}

int pop() {
  if (!stack) {
    return -1;
  }

  Node *n = stack;
  int val = n->value;
  stack = stack->next;
  free(n);
  return val;
}

void printReverse(Node *node) {
  if (node == NULL) {
    return;
  }

  printReverse(node->next);
  printf("%d", node->value);
}

int main() {
  push(1);
  push(2);
  push(3);
  push(4);
  pop();
  Node *current = stack;

  printReverse(current);

  return 0;
}