#include <stdio.h>

// Viet ham tinh tong 2 so su dung con tro

int sumInt(int *a, int *b) { return (*a + *b); };

int main() {
  int a = 5;
  int b = 7;
  int result = sumInt(&a, &b);
  printf("sum of 2 integer is: %d", result);
  return 0;
}
