#include <stdio.h>
// Lưu trữ số trong mảng và sau đó đưa giá trị đã lưu hiển thị trên màn hình.

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++) {
    printf("arr[%d]=%d\n", i, arr[i]);
  }
  return 0;
}
