#include <stdio.h>

// Yêu cầu: Nhập hai số từ bàn phím và kiểm tra 2 số nhập vào có phải là kiểu số
// nguyên và so sánh hai số?
int main() {
  float number01, number02;
  printf("\nInput a number01 value:");
  scanf("%f", &number01);

  printf("\nInput a number02 value:");
  scanf("%f", &number02);

  if (number01 != (int)number01) {
    printf("\nNumber 01 is not a integer number.");
  }
  if (number02 != (int)number02) {
    printf("\nNumber 02 is not a integer number.");
  }

  if (number01 == number02) {
    printf("\nNumber 01 equal number 02");
  } else if (number01 > number02) {
    printf("\nNumber 01 lager than number 02");
  } else {
    printf("\nNumber 01 small than number 02");
  }

  return 0;
}
