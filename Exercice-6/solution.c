#include <stdio.h>

int main() {
  int numbers[] = {10, 20, 30, 40, 50};

  int *ptr = numbers; // points to first element of the array

  for (int i = 0; i < 5; i++) {
    printf("The value: %d. It's address: %p\n", *(ptr + i), ptr + i);
  }

  return 0;
}
