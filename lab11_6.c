#include <stdio.h>

// Viet ham hoan doi 2 so su dung con tro

void swapInt(int *a, int *b) {
  int repo = *a;
  *a = *b;
  *b = repo;
};

int main() {
  int a = 5;
  int b = 7;
  swapInt(&a, &b);
  printf(" a= %d\n b= %d", a, b);
  return 0;
}
