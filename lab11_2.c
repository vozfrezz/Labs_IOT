#include <math.h>
#include <stdio.h>

// Tim so lon nhat trong mang.

int maxNumber(int arrNum[], int n) {
  int *numPtr = arrNum;
  int max = arrNum[0];

  for (int i = 0; i < n; i++) {
    if (*(numPtr + i) > max) {
      max = *(numPtr + i);
    }
  }
  return max;
}

int main() {
  int testArr[] = {1, 2, 3, 4, 5, 6, 7};
  int arrlen = sizeof(testArr) / sizeof(testArr[0]);
  int result = maxNumber(testArr, arrlen);
  printf("\nThe max number is %d", result);

  return 0;
}
