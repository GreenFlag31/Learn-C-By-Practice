#include <stdio.h>

#define ROWS 2
#define COLS 4

int main() {
  // 2d array
  const int arr[ROWS][COLS] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
  };

  // pointer
  const int (*ptr)[4] = arr;

  // print the element of the array via pointer ptr
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", *(ptr[i] + j));
    }
    printf("\n");
  }

  return 0;
}