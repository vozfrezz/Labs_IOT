#include <stdio.h>

// Viet chuong trinh hoan doi 2 so bang con tro.

int main() {
  int num1, num2, *num1_ptr, *num2_ptr;
  printf("\nEnter 2 value number:");
  scanf("%d%d", &num1, &num2);

  printf("\nNumber 1= %d and 2=%d before swap:", num1, num2);
  num1_ptr = &num1;
  num2_ptr = &num2;

  int repo = *num1_ptr;
  *num1_ptr = *num2_ptr;
  *num2_ptr = repo;

  printf("\nNumber 1=%d and 2=%d after swap:", num1, num2);

  return 0;
}
