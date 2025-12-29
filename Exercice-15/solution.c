#include <stdio.h>

int main() {
  int num = 5;
  int *firstPointer = &num;
  int **secondPointer = &firstPointer;

  **secondPointer = 10;
  printf("%d", num);
}