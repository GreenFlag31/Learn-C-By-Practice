#include <stdio.h>

void printBinary(int n);

int main() {
  printBinary(5); // ...101

  return 0;
}

void printBinary(int n) {
  for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
    printf("%d", (n >> i) & 1);
  }
}