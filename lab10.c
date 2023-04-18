#include <stdio.h>
// Viết chương trình tạo, khởi tạo biến con trỏ bằng 1 giá trị bất kỳ theo 3
// kiểu dữ liệu lần lượt là int, float, char. Hãy hiển thị địa chỉ và giá trị mà
// biến con trỏ trỏ tới.

int main() {
  int num = 9;
  float fl = 3.5;
  char arr = 'c';

  int *num_ptr = NULL;
  float *fl_ptr = NULL;
  char *arr_ptr = NULL;
  num_ptr = &num;
  fl_ptr = &fl;
  arr_ptr = &arr;
  printf("\n%p", num_ptr);
  printf("\n%p\n%p", fl_ptr, arr_ptr);

  return 0;
}
