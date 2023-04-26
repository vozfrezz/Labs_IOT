#include <stdio.h>
#include <stdlib.h>

/*
Sử dụng kiểu cấu trúc để viết chương trình tính tổng hai khoảng cách biểu thị
bằng đơn vị feet và đơn vị inch. Cụ thể là:
+ Tạo cấu trúc tên distance với hai biến int thành phần: feet và inch.
+ Thực hiện hàm void addDistance() để lấy hai thành phần của cấu trúc và hiển
thị tổng của chúng.
*/

typedef struct {
  int feet;
  int inch;
} distance_t;
void addDistance(distance_t distance1, distance_t distance2) {
  distance_t sum = {distance1.feet + distance2.feet,
                    distance1.inch + distance2.inch};
  printf("\nSum of two distance is %d, %d", sum.feet, sum.inch);
}

int main() {
  distance_t dst1 = {10, 15};
  distance_t dst2 = {3, 5};
  addDistance(dst1, dst2);
  return 0;
}
