#include <stdio.h>
// Lưu trữ số vào 1 mảng và hiển thị các số đó theo thứ tự ngược lại trong mảng.
int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  for (int i = 4; i >= 0; i--) {
    printf("\narr[%d]=%d", i, arr[i]);
  }
  return 0;
}
