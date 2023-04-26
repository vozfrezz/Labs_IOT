#include <stdio.h>

// Ham tinh giai thua cua 1 so cho truoc

int factorial(int n, int *result) {
  int num = 1;
  result = &num;
  for (int i = 1; i <= n; i++) {
    *result = *result * i;
  }
  return *result;
}

int main() {
  int a;
  printf("\nInput a value:");
  scanf("%d", &a);
  int aPtr = 1;
  int factorial_a = factorial(a, &aPtr);
  printf("\nfactorial of %d= %d", a, factorial_a);

  return 0;
}
