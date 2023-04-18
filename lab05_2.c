#include <stdio.h>

/* Nhập 1 số (int) từ bàn phím và đưa ra nhận định số này là số chẵn hay số
 * lẻ.*/

int main() {
  int randomNumber;
  printf("\nPlease input value number:");
  scanf("%d", &randomNumber);
  if (randomNumber % 2 != 0) {
    printf("\nThe input number is odd");
  } else {
    printf("\nThe input number is even");
  }
  return 0;
}
