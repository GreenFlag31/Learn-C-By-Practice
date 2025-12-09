#include <stdio.h>

int main() {
  int number = 42;
  int *ptr;
  ptr = &number;

  printf("Value: %d\n", *ptr);
  // prints expects a void pointer for %p (but will implicitly convert if
  // needed)
  printf("Address: %p\n", (void *)ptr);

  return 0;
}
