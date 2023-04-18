#include <stdio.h>

/*  Nhập một số bất kỳ từ bàn phím và đặt bit thứ 5 của số đã nhập thành bit 1
 * và đưa kết quả ra màn hình*/

int main() {
  int randomNumber;
  printf("\nInput a random number:");
  scanf("%d", &randomNumber);
  randomNumber = randomNumber | (1 << 4);
  printf("\nThe new number when we change bit 5th to a bit set is: %d",
         randomNumber);
  return 0;
}
