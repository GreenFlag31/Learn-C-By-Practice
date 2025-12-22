#include <stdio.h>

void add(int *a, int *b, int *c);

int main() {
  int a, b, c;
  a = 10;
  b = 20;

  add(&a, &b, &c);

  printf("The result of the addition is : %d", c);

  return 0;
}

void add(int *a, int *b, int *c) { *c = *a + *b; }
