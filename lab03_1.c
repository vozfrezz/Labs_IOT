#include <math.h>
#include <stdio.h>

/*
 Viết 1 chương trình đưa ra màn hình giá trị của chiều dài, chiều rộng có độ dài
 tùy ý của 1 hình chữ nhật và chu vi, diện tích của hình chữ nhật đó
*/
int main() {
  float length, width, perimeter, area;
  printf("\nInput the length of rectangle:");
  scanf("%f", &length);

  printf("\nInput the width of rectangle:");
  scanf("%f", &width);

  perimeter = (length + width) * 2;
  area = length * width;

  printf("\nThe perimeter of rectangle with the length %0.1f and the width "
         "%0.1f is: %0.1f",
         length, width, perimeter);

  printf("\nThe area of rectangle with the length %0.1f and the width %0.1f "
         "is: %0.1f",
         length, width, area);

  return 0;
}
