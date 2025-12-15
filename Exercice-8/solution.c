#include <stdio.h>

int main() {
  // shift 1 zero to the left
  printf("%d multiplied by two equals %d\n", 5, 5 << 1);

  // shift 1 zero to the right
  printf("%d divided by two equals %d\n", 6, 6 >> 1);

  // bitwise and (&)
  int num1;
  int num2;

  printf("Enter num1: ");
  scanf("%d", &num1);
  printf("Enter num2: ");
  scanf("%d", &num2);

  printf("Bitwise & between %d and %d makes %d\n", num1, num2, num1 & num2);

  printf("Bitwise | between 5 and 3 makes %d\n", 5 | 3);

  printf("Bitwise ^ between 5 and 3 makes %d\n", 5 ^ 3);

  printf("Bitwise ~ for 3: %d\n", ~3);

  return 0;
}