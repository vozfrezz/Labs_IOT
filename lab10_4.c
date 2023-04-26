#include <stdio.h>

// Viet chuong trinh su dung con tro de tinh tong 2 so.

int main() {
  int num1, num2;
  int *num1_ptr, *num2_ptr;
  num1_ptr = &num1;
  num2_ptr = &num2;
  printf("\nInput number 1 value: ");
  scanf("%d", num1_ptr);
  printf("\nInput number 2 value:");
  scanf("%d", num2_ptr);

  printf("Sum of number 1 and number 2 is %d", *num1_ptr + *num2_ptr);

  return 0;
}
