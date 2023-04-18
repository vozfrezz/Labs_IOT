#include <stdio.h>
// Tìm tất cả số nguyên tố trong khoảng từ 0 đến 100.

int main() {
  int primeArr[50];
  primeArr[0] = 2;
  primeArr[1] = 3;
  int primeCount = 2;
  for (int i = 4; i <= 100; i++) {
    if (i % 2 != 0) {
      int count = 0;
      for (int j = 0; j < primeCount; j++) {
        if (i % primeArr[primeCount - 1] == 0) {
          count += 1;
        }
      }
      if (count == 0) {
        primeArr[primeCount] = i;
        primeCount += 1;
      } else {
        count = 0;
      }
    }
  }

  for (int i = 0; i < primeCount; i++) {
    printf("\nprimeArr[%d]=%d", i, primeArr[i]);
  }
  return 0;
}
