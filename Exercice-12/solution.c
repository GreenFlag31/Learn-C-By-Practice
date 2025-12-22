#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *getRnd() {
  int *arr = malloc(10 * sizeof(int));

  // always check if memory allocation is failing
  if (arr == NULL) {
    printf("Memory allocation failed");
    exit(EXIT_FAILURE);
  }

  for (int i = 0; i < 10; i++) {
    arr[i] = rand();
  }

  return arr;
}

int main() {
  srand((unsigned)time(NULL));

  int *randNumber = getRnd();

  for (int i = 0; i < 10; i++) {
    printf("arr[%d]:%d\n", i, *(randNumber + i));
  }

  free(randNumber);
  // good practice: set the pointer to NULL to avoid dangling pointer
  randNumber = NULL;
  return 0;
}