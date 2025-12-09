#include <stdio.h>
#include <string.h>

typedef struct {
  char key[50];
  int value;
} Pair;

int main() {
  Pair store[10];
  // (50 x 1) + (4 x 1) + 2 (memory padding) = 56
  printf("Structure size: %zu bytes\n", sizeof(Pair));

  // copy a string into an array
  strcpy(store[0].key, "age");
  store[0].value = 25;

  strcpy(store[1].key, "score");
  store[1].value = 99;

  printf("%s = %d\n", store[0].key, store[0].value);
  printf("%s = %d\n", store[1].key, store[1].value);

  return 0;
}
