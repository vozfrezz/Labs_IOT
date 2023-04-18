#include <stdio.h>
// Viết chương trình sử dụng con trỏ để tìm số lớn nhất giữa 2 số.

void checkNumber(int *a, int *b) {
  if (*a > *b) {
    printf("a bigger than b\n");
  } else if (*a < *b) {
    printf("a small than b\n");
  } else {
    printf("a equal b\n");
  }
}
int main() {
  int num1 = 9;
  int num2 = 10;
  int *num1_ptr, *num2_ptr;
  num1_ptr = &num1;
  num2_ptr = &num2;
  checkNumber(num1_ptr, num2_ptr);

  return 0;
}
