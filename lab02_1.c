#include <stdio.h>

/*
Viết chương trình C sử dụng lệnh scanf() và printf() để nhập thông tin từ bàn
phím khi chương trình đang chạy và hiển thị thông tin vừa nhận trên màn hình.
*/

int main() {
  char variableName;
  printf("Please enter the variable name:");
  scanf("%c", &variableName);
  printf("%c\n", variableName);
  return 0;
}
