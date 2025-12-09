#include <stdio.h>

// declare a function signature
float calculateAverage(const float *num, int numGrades);

int main() {
  float result;
  // usage of 'const' indicates that the array will not change
  const float grades[] = {13.4, 15, 12.6, 13, 10.5, 8.0};
  // get the length of the array
  int numberOfGrades = sizeof(grades) / sizeof(float);

  result = calculateAverage(grades, numberOfGrades);
  printf("Result = %.2f", result);

  return 0;
}

float calculateAverage(const float *num, int numGrades) {
  float sum = 0.0;

  for (int i = 0; i < numGrades; ++i) {
    sum += num[i];
  }

  return sum / numGrades;
}