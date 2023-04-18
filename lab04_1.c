#include <stdio.h>

/*
Nhập một số bất kì từ bàn phím và kiểm tra bit thứ 3 của số đã nhập là bit 0 hay
bit 1.
*/

int main() {

  int checkBit;
  printf("\nInput the number:");
  scanf("%d", &checkBit);
  checkBit = (checkBit >> 2) & 1;
  printf("3rd bit is bit %d", checkBit != 0 ? 1 : 0);
  return 0;
}
