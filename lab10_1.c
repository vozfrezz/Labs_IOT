#include <stdio.h>
// Viết chương trình thay đổi giá trị của một biến kiểu integer (int) bằng con
// trỏ.

int main() {
  int num = 9;
  int *num_ptr = NULL;
  num_ptr = &num;
  *num_ptr = 10;
  printf("%d", num);
  return 0;
}
