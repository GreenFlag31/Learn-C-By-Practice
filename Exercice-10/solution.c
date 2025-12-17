#include <stdbool.h>
#include <stdio.h>

bool checkIfANumberIsEven(int n);

int main() {
  // following numbers are odd
  printf("%d\n", checkIfANumberIsEven(5));
  printf("%d\n", checkIfANumberIsEven(3));
  printf("%d\n", checkIfANumberIsEven(31999));

  // following numbers are even
  printf("%d\n", checkIfANumberIsEven(2));
  printf("%d\n", checkIfANumberIsEven(20120));
  printf("%d\n", checkIfANumberIsEven(500));
  return 0;
}

bool checkIfANumberIsEven(int n) { return (n & 1) == 0; }