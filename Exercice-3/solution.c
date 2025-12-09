#include <stdbool.h>
#include <stdio.h>

int main() {
  char name[100];
  printf("Enter your name: ");

  // Insure only to read up to 99 characters to avoid buffer overflow
  scanf("%99s", name);

  printf("Your name letter by letter separated by a dash :\n");

  for (int i = 0; name[i] != '\0'; i++) {
    bool isLastChar = (name[i + 1] == '\0');
    printf("%c%s", name[i], isLastChar ? "" : "-");
  }

  return 0;
}
