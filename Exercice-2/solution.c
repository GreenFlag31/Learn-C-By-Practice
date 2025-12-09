#include <stdio.h>

int main() {
  int n;
  int evenCount = 0;

  printf("How many numbers? ");

  // input will be stored in variable n
  scanf("%d", &n);

  // declare an array to hold n integers
  int numbers[n];

  for (int i = 0; i < n; i++) {
    printf("Enter number %d: ", i + 1);
    // storing input one by one in the array
    scanf("%d", &numbers[i]);
  }

  for (int i = 0; i < n; i++) {
    if (numbers[i] % 2 == 0) {
      evenCount++;
    }
  }

  printf("Even numbers count: %d\n", evenCount);
  return 0;
}
